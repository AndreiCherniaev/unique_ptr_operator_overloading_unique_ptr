cmake_minimum_required(VERSION 3.16)

project(unique_ptr_operator_overloading LANGUAGES CXX DESCRIPTION "unique_ptr operator overloading with unique_ptr or QScopedPointer test" VERSION 0.1.0.0)

set(CMAKE_AUTOMOC ON)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Core)

qt_add_executable(${PROJECT_NAME}
  class1.cpp class1.h
  main.cpp
)

target_link_libraries(${PROJECT_NAME} PUBLIC Qt::Core)

install(TARGETS ${PROJECT_NAME} RUNTIME DESTINATION bin)
