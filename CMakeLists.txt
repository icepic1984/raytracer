cmake_minimum_required(VERSION 3.10)
project(Raytracer)

find_package(Boost 1.66.0 REQUIRED COMPONENTS filesystem)
set(CMAKE_CXX_STANDARD 17)

add_executable(Raytrace main.cpp image.cpp)
target_link_libraries(Raytrace Boost::filesystem)
