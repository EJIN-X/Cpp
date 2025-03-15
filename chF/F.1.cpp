#include <iostream>

constexpr double calcCircumference(double radius)
{
    constexpr double pi {3.141592654};
    return 2.0*pi*radius;
}

int main()
{
    constexpr double circumference{calcCircumference(3.0)};
    std::cout <<circumference;
    return 0;
}