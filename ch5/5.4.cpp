// #include <iostream>
// int main()
// {
//     const int x{7};
//     // int y{x+1};
//     std::cout << x;
//     std::cout << x+1;
//     return 0;
// }

#include <iostream>
// int getNumber()
// {
//     std::cout <<"Enter a number : ";
//     int y{};
//     std::cin >>y;
//     return y;
// }
//
// int five()
// {
//     return 5;
// }

int main()
{
    const int a{5};
    const int b{a};
    int d{6};
    const int e{d};
    std::cout << a<<b<<d<<e;
}