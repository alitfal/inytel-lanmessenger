find_package(Qt6 REQUIRED COMPONENTS Core Gui Network Xml Widgets Sql LinguistTools)

if(UNIX)
    find_package(Qt6 REQUIRED COMPONENTS Multimedia)
endif()

find_package(OpenSSL 3 REQUIRED)

set(LMC_SOURCES
    src/usertreewidget.cpp
    src/udpnetwork.cpp
    src/transferwindow.cpp
    src/transferlistview.cpp
    src/tcpnetwork.cpp
    src/lmcstrings.cpp
    src/soundplayer.cpp
    src/shared.cpp
    src/settingsdialog.cpp
    src/settings.cpp
    src/network.cpp
    src/netstreamer.cpp
    src/messagingproc.cpp
    src/messaging.cpp
    src/message.cpp
    src/mainwindow.cpp
    src/main.cpp
    src/lmc.cpp
    src/imagepickeraction.cpp
    src/imagepicker.cpp
    src/historywindow.cpp
    src/history.cpp
    src/helpwindow.cpp
    src/filemodelview.cpp
    src/datagram.cpp
    src/crypto.cpp
    src/chatwindow.cpp
    src/broadcastwindow.cpp
    src/aboutdialog.cpp
    src/xmlmessage.cpp
    src/chathelper.cpp
    src/theme.cpp
    src/messagelog.cpp
    src/messagebubble.cpp
    src/messagebubblelog.cpp
    src/updatewindow.cpp
    src/webnetwork.cpp
    src/userinfowindow.cpp
    src/chatroomwindow.cpp
    src/userselectdialog.cpp
    src/subcontrols.cpp
    src/trace.cpp
    src/filemessagingproc.cpp
    src/qmessagebrowser.cpp
)

set(LMC_FORMS
    src/transferwindow.ui
    src/settingsdialog.ui
    src/mainwindow.ui
    src/historywindow.ui
    src/helpwindow.ui
    src/chatwindow.ui
    src/broadcastwindow.ui
    src/aboutdialog.ui
    src/updatewindow.ui
    src/userinfowindow.ui
    src/chatroomwindow.ui
    src/userselectdialog.ui
)

set(LMC_TRANSLATIONS
    src/en_US.ts src/ml_IN.ts src/fr_FR.ts src/de_DE.ts src/tr_TR.ts
    src/es_ES.ts src/ko_KR.ts src/bg_BG.ts src/ro_RO.ts src/ar_SA.ts
    src/sl_SI.ts src/pt_BR.ts src/ru_RU.ts src/it_IT.ts src/sv_SE.ts
)

set(EXE_NAME lmc)
if(UNIX AND NOT APPLE)
    set(EXE_NAME lan-messenger)
elseif(APPLE)
    set(EXE_NAME "INYTEL-Messenger")
endif()

qt_add_executable(${EXE_NAME}
    ${LMC_SOURCES}
    ${LMC_FORMS}
    src/resource.qrc
)

if(WIN32)
    set_target_properties(${EXE_NAME} PROPERTIES WIN32_EXECUTABLE TRUE)
    target_sources(${EXE_NAME} PRIVATE src/lmcwin32.rc)
elseif(APPLE)
    set(MACOS_ICON "${CMAKE_CURRENT_SOURCE_DIR}/src/lmc.icns")

    set_source_files_properties(
        "${MACOS_ICON}"
        PROPERTIES
        MACOSX_PACKAGE_LOCATION "Resources"
    )

    target_sources(${EXE_NAME} PRIVATE "${MACOS_ICON}")

    set_target_properties(${EXE_NAME} PROPERTIES
        MACOSX_BUNDLE TRUE
        MACOSX_BUNDLE_ICON_FILE "lmc.icns"
        MACOSX_BUNDLE_BUNDLE_NAME "INYTEL Messenger"
        OUTPUT_NAME "INYTEL Messenger"
    )
endif()


target_link_libraries(${EXE_NAME} PRIVATE
    Qt6::Core Qt6::Gui Qt6::Network Qt6::Xml Qt6::Widgets Qt6::Sql
    lmcapp
    OpenSSL::Crypto
)

if(UNIX)
    target_link_libraries(${EXE_NAME} PRIVATE Qt6::Multimedia)
endif()

if(MSVC)
    target_link_libraries(${EXE_NAME} PRIVATE advapi32) # GetUserNameW in Helper::getLogonName
endif()

qt6_add_translation(LMC_QM_FILES ${LMC_TRANSLATIONS})
target_sources(${EXE_NAME} PRIVATE ${LMC_QM_FILES})
