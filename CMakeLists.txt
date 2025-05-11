cmake_minimum_required(VERSION 3.14)

project(BirthdayAstro LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt6 REQUIRED COMPONENTS Widgets)

add_executable(BirthdayAstro
    main.cpp
    BirthdayAstroWidget.cpp
    BirthdayAstroWidget.h
    BirthdayAstroWidget.ui

)

target_link_libraries(BirthdayAstro Qt6::Widgets)
