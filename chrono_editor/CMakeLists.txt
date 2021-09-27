cmake_minimum_required(VERSION 2.8)

project(ctse)
find_package(Qt5Widgets REQUIRED)

set(ctse_SOURCES character.cpp game.cpp gui.cpp main.cpp sramfile.cpp)
set(ctse_HEADERS character.h game.h gui.h sramfile.h strings.h struct.h)

set(CMAKE_AUTOMOC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set (CMAKE_CXX_STANDARD 11)

add_executable(ctse ${ctse_SOURCES} ${ctse_HEADERS_MOC})
qt5_use_modules(ctse Core Widgets)

target_link_libraries(ctse ${QT_LIBRARIES})
