set (src ${CMAKE_CURRENT_LIST_DIR}/src/ray.cpp)
    
add_library(core ${src})

target_include_directories(core
  PUBLIC ${CMAKE_CURRENT_LIST_DIR}/include
  PRIVATE ${CMAKE_CURRENT_LIST_DIR}/src)

target_link_libraries(core PUBLIC Glm::Glm)

add_library(core::core ALIAS core)
