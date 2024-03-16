cmake_minimum_required(VERSION 3.16)

project(ctse)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Core Widgets)
qt_standard_project_setup()

qt_add_executable(ctse
    character.cpp
    game.cpp
    gui.cpp
    main.cpp
    sramfile.cpp
)

target_link_libraries(ctse PRIVATE Qt6::Widgets)
