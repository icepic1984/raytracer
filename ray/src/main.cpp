#include <image.hpp>
#include <iostream>
#include <print.hpp>
#include <ray.hpp>

using namespace utils;
using namespace core;


int main(int argc, char *argv[])
{

    image i(1024,800);

    i(10, 10) = color{255, 0, 0};
    i(9, 9) = color{0, 255, 0};
    write("test.ppm", i);

    core::ray r(glm::vec3{0.0f, 0.0f, 1.0f}, glm::vec3{0.0f, 0.0f, 2.0f});

    r.origin().z = 40;
    
    glm::mat4 m;
    
    std::cout << m << std::endl;
    
    return 0;
}

