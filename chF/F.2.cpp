#include <iostream>

// constexpr int foo(int);
// constexpr int goo(int c)
// {
//     return foo(c);
// }
// constexpr int foo(int b)
// {
//     return b;
// }
//
// int main()
// {
//     constexpr int a{goo(5)};
//     std::cout <<a;
//     return 0;
// }

constexpr int greater(int x,int y)
{
    return (x>y?x:y);
}

int main()
{
    constexpr int g{greater(5,6)};
    std::cout <<g<<std::endl;

    std::cout <<greater(5,6)<<std::endl;
}