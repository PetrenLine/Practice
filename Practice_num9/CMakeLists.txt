cmake_minimum_required(VERSION 3.14)

project(Practice_num9 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)

add_executable(Practice_num9
  main.cpp
)
target_link_libraries(Practice_num9 Qt${QT_VERSION_MAJOR}::Core)

install(TARGETS Practice_num9
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
