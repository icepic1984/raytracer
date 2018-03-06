#pragma once
#include <glm/ext.hpp>
#include <glm/glm.hpp>
#include <iostream>

namespace core {
template <typename T, typename = void>
struct has_to_string : std::false_type {
};

template <typename T>
struct has_to_string<T,
    std::void_t<decltype(glm::to_string(std::declval<T&>()))>>
    : std::true_type {
};

template <typename T>
typename std::enable_if<has_to_string<T>::value, std::ostream&>::type
operator<<(std::ostream& stream, const T& t)
{
    stream << glm::to_string(t);
    return stream;
}

} // namespace core
