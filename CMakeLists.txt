cmake_minimum_required(VERSION 3.10)
project(Raytracer)
    
# Set module path
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/")

# Find boost
find_package(Boost 1.66.0 REQUIRED COMPONENTS system filesystem)

#Find glm
find_package(GLM 0.9.8 REQUIRED)

#Enable c++ 17 by default
set(CMAKE_CXX_STANDARD 17)

#add_subdirectory(core)
add_subdirectory(utils)
add_subdirectory(core)
add_subdirectory(ray)


