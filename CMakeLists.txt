cmake_minimum_required(VERSION 3.5)

project(calabash VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_DEBUG_POSTFIX d)

add_library(tutorial_compiler_flags INTERFACE)
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif()


find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)
find_package(Qt6 REQUIRED COMPONENTS Network)

INCLUDE_DIRECTORIES(
    ${PROJECT_SOURCE_DIR}
)

set(PROJECT_SOURCES
        main.cpp

        allmain.cpp allmain.h allmain.ui

        images.qrc Qss.qrc

        http.h http.cpp

        introduce.h introduce.cpp introduce.ui

        owner.h owner.cpp owner.ui

        login.h login.cpp login.ui

        skin.h skin.cpp skin.ui

        student.h student.cpp student.ui

        teacher.h teacher.cpp teacher.ui

        md5.h md5.cpp

        message.h message.cpp

        json.hpp json_fwd.hpp

        frmimageswitch.h frmimageswitch.cpp frmimageswitch.ui

        imageswitch.h imageswitch.cpp

        mylineedit.h mylineedit.cpp

        tableviewdelegate.h tableviewdelegate.cpp

        leavedata.h

        filemanager.h filemanager.cpp

        #outcome.h outcome.cpp outcome.ui

        #slidepage.h slidepage.cpp

)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(calabash
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET calabash APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(calabash SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(calabash
            ${PROJECT_SOURCES}
        )
    endif()
endif()



target_link_libraries(calabash PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)
target_link_libraries(calabash PRIVATE Qt6::Network)


set_target_properties(calabash PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

install(TARGETS calabash
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(calabash)
endif()
