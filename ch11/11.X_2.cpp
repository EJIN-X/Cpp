#include <iostream>
template <typename T>
T add(T x,T y)
{
    return x+y;
}

template <typename U, typename V>
auto mult(U x, V y)
{
    return x*y;
}

template <typename T, typename U>
auto sub(T x, U y)
{
    return x-y;
}

int main()
{
    std::cout <<add(2,3)<<std::endl;
    std::cout <<add(1.2,3.4)<<std::endl;

    std::cout <<mult(2,3)<<std::endl;
    std::cout <<mult(1.2,3)<<std::endl;

    std::cout <<sub(3,2)<<std::endl;
    std::cout <<sub(3.5,2)<<std::endl;
    std::cout <<sub(4,1.5)<<std::endl;

    return 0;
}