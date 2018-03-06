#pragma once
#include <cstdint>
#include <vector>
#include <boost/filesystem.hpp>

namespace utils {

struct color {
    uint8_t r;
    uint8_t g;
    uint8_t b;
};

class image {
public:
    image(int width, int height);

    const color& operator[](int index) const;

    color& operator[](int index);

    const color& operator()(int x, int y) const;

    color& operator()(int x, int y);

    int width() const;

    int height() const;

    const color* data() const;

    color* data();
    
    
private:
    int m_width;

    int m_height;

    std::vector<color> m_data;
};

void write(const boost::filesystem::path& path, const image& img);

} // namespace ray
