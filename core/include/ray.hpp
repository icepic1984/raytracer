#pragma once

#include <glm/glm.hpp>

namespace core {

class ray{
public:
    ray();
    
    ray(const glm::vec3& origin, const glm::vec3& dir);
    
    const glm::vec3& dir() const;

    glm::vec3& dir();

    const glm::vec3& origin() const;

    glm::vec3& origin();

private:
    
    glm::vec3 m_origin;
    glm::vec3 m_dir;
    

};

}
