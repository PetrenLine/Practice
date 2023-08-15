cmake_minimum_required(VERSION 3.14)

project(Practice LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)

add_executable(Practice
  main.cpp
)
target_link_libraries(Practice Qt${QT_VERSION_MAJOR}::Core)

install(TARGETS Practice
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

add_subdirectory(Practice_num1)
add_subdirectory(Practice_num2)
add_subdirectory(Practice_num3)
add_subdirectory(Practice_num4)
add_subdirectory(Practice_num5)
add_subdirectory(Practice_num6)
add_subdirectory(Practice_num7)
add_subdirectory(Practice_num8)
add_subdirectory(Practice_num_10)
add_subdirectory(Practice_num_11)
add_custom_target(ProjectRelatedFiles SOURCES
.gitignore
.astylerc
)
