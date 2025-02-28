// #include <iostream>
//
// int five()
// {
//     return 5;
// }
// //not a constant
//
// int main()
// {
//     constexpr double gravity{9.8};
//     constexpr int sum{4+5};
//     constexpr int something{sum};
//
//     std::cout << "Enter you age : ";
//     int age{};
//     std::cin >> age;
//
//     constexpr int myAge{age}; //compile error cuz not const
//     constexpr int f{five()}; //compile error cuz not const
//     return 0;
// }

#include <iostream>
int max(int x, int y)
{
    if (x>y)
        return x;
    else
        return y;
}

constexpr int cmax(int x, int y)
{
    if (x>y)
        return x;
    else
        return y;
}

int main()
{
    int m1{max(5,6)};
    const int m2{max(5,6)};
    constexpr int m3{max(5,6)}; //compile error cuz max not a constant expression

    int m4{cmax(5,6)};
    const int m5{cmax(5,6)};
    constexpr int m6{cmax(5,6)};

    return 0;
}