#include <iostream>

template <typename T>
T max(T x,T y)
{
    return (x<y)?y:x;
}

int main()
{
    std::cout << max(2.2,7.5);
}