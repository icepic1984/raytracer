set (src ${CMAKE_CURRENT_LIST_DIR}/src/main.cpp)

add_executable(ray ${src})

target_link_libraries(ray PUBLIC utils::utils core::core)
