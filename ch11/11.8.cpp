#include <iostream>

// template <typename T>
// T max(T x,T y)
// {
//     return (x<y)?y:x;
// }
//
// int main()
// {
//     std::cout << max(static_cast<double>(2),3.5)<<std::endl;
//     return 0;
//
// }

// template <typename T>
// T max(T x,T y)
// {
//     return (x<y)?y:x;
// }
//
// int main()
// {
//     std::cout <<max<double>(2,3.5) <<std::endl;
//     return 0;
//
// }

template <typename T,typename U>
auto max(T x,U y)
{
    return (x<y)?y:x;
}

int main()
{
    std::cout <<max(2,3.5)<<std::endl;
}