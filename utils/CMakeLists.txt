set (src ${CMAKE_CURRENT_LIST_DIR}/src/image.cpp)
    
add_library(utils ${src})

target_include_directories(utils
  PUBLIC ${CMAKE_CURRENT_LIST_DIR}/include
  PRIVATE ${CMAKE_CURRENT_LIST_DIR}/src)

target_link_libraries(utils PUBLIC Boost::filesystem)

add_library(utils::utils ALIAS utils)
