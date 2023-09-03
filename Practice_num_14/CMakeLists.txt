cmake_minimum_required(VERSION 3.14)

project(Practice_num_14 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)

add_executable(Practice_num_14 main.cpp)
configure_file(${CMAKE_CURRENT_SOURCE_DIR}/input.txt ${CMAKE_CURRENT_BINARY_DIR}/input.txt COPYONLY)
configure_file(${CMAKE_CURRENT_SOURCE_DIR}/output.txt ${CMAKE_CURRENT_BINARY_DIR}/output.txt COPYONLY)

target_link_libraries(Practice_num_14 Qt${QT_VERSION_MAJOR}::Core)

install(TARGETS Practice_num_14
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
