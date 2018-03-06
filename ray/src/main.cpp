#include <image.hpp>

using namespace utils;

int main(int argc, char *argv[])
{

    image i(1024,800);

    i(10, 10) = color{255, 0, 0};
    i(9, 9) = color{0, 255, 0};

    write("test.ppm", i);
    return 0;
}

