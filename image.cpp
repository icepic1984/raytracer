#include "image.hpp"

namespace ray {

image::image(int width, int height)
    : m_width(width), m_height(height), m_data(width * height, color{0, 0, 0})
{
}

const color& image::operator[](int index) const
{
    return m_data[index];
}

color& image::operator[](int index)
{
    return m_data[index];
}

const color& image::operator()(int x, int y) const
{
    return m_data[y * m_width + x];
}

color& image::operator()(int x, int y)
{
    return m_data[y * m_width + x];
}

int image::width() const
{
    return m_width;
}

int image::height() const
{
    return m_height;
}

const color* image::data() const
{
    return m_data.data();
}

color* image::data()
{
    return m_data.data();
}

void write(const boost::filesystem::path& path, const image& img)
{
    std::ofstream ofs(
        path.string(), std::ofstream::out | std::ofstream::binary);
    ofs << "P6\n"
        << img.width() << " " << img.height() << "\n"
        << "255"
        << "\n";

    ofs.write(
        reinterpret_cast<const char*>(img.data()), img.width() * img.height() * 3);
}



} // namespace ray
