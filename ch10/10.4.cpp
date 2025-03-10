//
// void someFcn(int i)
// {
//
// }
// int main()
// {
//     double d{5.0};
//     // someFcn(d);
//     someFcn(static_cast<int>(d));
// }
#include <iostream>
int main()
{
    constexpr double k{0.1};
    float k1{k};
    std::cout << k1;
    double d{3.5};

    int i {static_cast<int>(d)};
    std::cout <<i;
    return 0;
}