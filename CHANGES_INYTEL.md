# LAN Messenger — Modernización y rediseño INYTEL

Resumen de todo el trabajo realizado sobre el proyecto original.

## 1. Sistema de build

- Sustituido `qmake` por **CMake** (`CMakeLists.txt` en la raíz, `lmc/` y `lmcapp/`).
- Objetivo de compilación probado y verificado con **Qt 6.4.2** + **OpenSSL 3.0.13** en Linux.
- Recomendado migrar el CI de `.travis.yml`/`appveyor.yml` a GitHub Actions (no incluido en este paquete).

## 2. Migración a Qt6

Se corrigieron todas las incompatibilidades de compilación con Qt6, entre ellas:

- `QRegExp` → `QRegularExpression` (varios archivos)
- `QDesktopWidget` → `QScreen` / `QGuiApplication`
- `QString::null` (60+ apariciones) → `QString()`
- `foreach` → range-based `for`
- `qrand`/`qsrand` → `QRandomGenerator`
- `QSound` → `QSoundEffect` / `QMediaDevices`
- `QStandardPaths::DataLocation` → `AppDataLocation`
- `Qt::WindowFlags flags = 0` → `= Qt::WindowFlags()`
- `QStringList::toSet()` (eliminado) → construcción vía `QSet` + iteradores
- `QTextStream::setCodec()` (eliminado, Qt6 ya usa UTF-8 por defecto)
- `Qt::SystemLocaleDate`/`SystemLocaleShortDate` → `QLocale::system()`
- `QPalette::foreground()` → `windowText()`
- `qVariantFromValue` → `QVariant::fromValue`
- Includes que Qt6 ya no arrastra transitivamente (`QActionGroup`, `QStandardPaths`, etc.)

### Causa raíz no obvia
El proyecto propio tenía un archivo `lmc/src/strings.h` con el **mismo nombre que la cabecera POSIX del sistema** `<strings.h>`. Al añadir `lmc/src` al include path, cualquier inclusión interna de `<string.h>` (que a su vez incluye `<strings.h>`) resolvía a nuestro propio archivo, causando errores en cascada aparentemente aleatorios en cabeceras de Qt. Se renombró a `lmcstrings.h`/`.cpp`.

### Bugs reales preexistentes corregidos de paso
- `soundplayer.cpp`: `isAvailable()` tenía la lógica de disponibilidad de audio invertida.
- `messaging.cpp`: `createUserId()` pasaba un puntero (`QString*`) donde se esperaba el valor.
- `usertreewidget.cpp`: llamada rota a `elidedText` con sintaxis y orden de argumentos incorrectos.

## 3. Identidad visual INYTEL

### Icono de la app
Regenerado `lmc.ico` (multi-resolución 16–256px) y `lmc.icns` a partir del icono oficial de INYTEL. Se usa automáticamente en icono de ventana, barra de tareas y bandeja del sistema (`IDR_APPICON`).

### Hoja de estilos global (`resources/inytel.qss`)
Aplica la paleta de marca (índigo `#4f46e5`, slate, emerald, amber) a todos los widgets nativos: botones, inputs, listas/árboles, pestañas, scrollbars, tooltips, barras de progreso. Cargada en `main.cpp` vía `QApplication::setStyleSheet()`.

### Nuevo tema de chat "INYTEL" (`resources/themes/INYTEL/`)
Burbujas de chat con la paleta de marca (saliente = índigo, entrante = slate, difusión = emerald, archivos = amber). Establecido como tema por defecto de fábrica.

### Bugs de temas descubiertos y corregidos (afectan a los 5 temas, no solo al nuevo)
- **`main.css` nunca se aplicaba**: no existía ninguna llamada a `setDefaultStyleSheet()` en todo el código. Añadido campo `mainCss` a `ThemeData`, cargado en `theme.cpp` y aplicado en `messagelog.cpp`.
- **Selectores CSS en mayúsculas** (`DIV`, `BODY`, `SPAN`): el motor de texto de Qt es sensible a mayúsculas en los selectores de etiqueta, a diferencia de un navegador. Corregidos a minúsculas en los 5 temas.
- **Clase CSS inválida `.1st`** (empieza por dígito): rompía el parseo completo de la hoja de estilos en cuanto Qt la encontraba. Renombrada a `.first` en los 5 temas.
- Confirmado empíricamente (render + análisis de píxeles) que `border-radius` **no se soporta** en el motor de texto de los chats (sí en QSS de widgets normales), por lo que las esquinas redondeadas de las burbujas usan la técnica de "escalera de píxeles" del tema `Bubble` original, recoloreada.

## Pendiente / recomendado a futuro
- Reescribir `crypto.cpp` con la API moderna `EVP_PKEY` de OpenSSL (hoy compila con warnings de deprecación, pero funciona).
- Migrar CI a GitHub Actions.
- Aplicar la identidad de marca también a otros temas de chat si se desea mantenerlos (`Bubble`, `Classic`, etc. solo recibieron el fix de bugs, no el recoloreado).
