# lmcapp: shared library providing single-instance application support
# (based on the classic Qt Solutions qtsingleapplication), plus a few
# helpers for multilingual UI added by the LAN Messenger project.

find_package(Qt6 REQUIRED COMPONENTS Core Network Widgets)

set(LMCAPP_SOURCES
    src/qtsinglecoreapplication.cpp
    src/qtsingleapplication.cpp
    src/qtlockedfile.cpp
    src/qtlocalpeer.cpp
    src/application.cpp
)

if(WIN32)
    list(APPEND LMCAPP_SOURCES src/qtlockedfile_win.cpp)
else()
    list(APPEND LMCAPP_SOURCES src/qtlockedfile_unix.cpp)
endif()

set(LMCAPP_HEADERS
    src/qtsinglecoreapplication.h
    src/qtsingleapplication.h
    src/qtlockedfile.h
    src/qtlocalpeer.h
    src/application.h
)

add_library(lmcapp SHARED ${LMCAPP_SOURCES} ${LMCAPP_HEADERS})

target_compile_definitions(lmcapp
    PRIVATE QT_QTSINGLEAPPLICATION_EXPORT
    INTERFACE QT_QTSINGLEAPPLICATION_IMPORT
)

target_include_directories(lmcapp
    PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/src>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/../lmc/src> # for settings.h
)

target_link_libraries(lmcapp PUBLIC Qt6::Core Qt6::Network Qt6::Widgets)

set_target_properties(lmcapp PROPERTIES
    VERSION 2.0.0
    SOVERSION 2
)
