#include <ray.hpp>

namespace core {

ray::ray(){};

ray::ray(const glm::vec3& origin, const glm::vec3& dir)
    : m_origin(origin), m_dir(dir){};


const glm::vec3& ray::dir() const
{
    return m_dir;
}

glm::vec3& ray::dir()
{
    return m_dir;
}

const glm::vec3& ray::origin() const
{
    return m_origin;
}

glm::vec3& ray::origin()
{
    return m_origin;
}

}
