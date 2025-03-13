#include <iostream>

// template <int N>
// void print()
// {
//     std::cout <<N <<std::endl;
// }
// int main()
// {
//     print<5>();
// }
// #include <cassert>
// #include <cmath> // for std::sqrt
//
// double getSqrt(double d)
// {
//     assert(d >= 0.0 && "getSqrt(): d must be non-negative");
//
//     if (d >= 0)
//         return std::sqrt(d);
//
//     return 0.0;
// }
//
// int main()
// {
//     std::cout << getSqrt(5.0) << '\n';
//     std::cout << getSqrt(-5.0) << '\n';
//
//     return 0;
// }

// #include <cmath> // for std::sqrt
// #include <iostream>
//
// template <double D> // requires C++20 for floating point non-type parameters
// double getSqrt()
// {
//     static_assert(D >= 0.0, "getSqrt(): D must be non-negative");
//
//     if constexpr (D >= 0) // ignore the constexpr here for this example
//         return std::sqrt(D); // strangely, std::sqrt isn't a constexpr function (until C++26)
//
//     return 0.0;
// }
//
// int main()
// {
//     std::cout << getSqrt<5.0>() << '\n';
//     std::cout << getSqrt<-5.0>() << '\n';
//
//     return 0;
// }

#include <iostream>

// template <int N>
// void print()
// {
//     std::cout <<N<<std::endl;
// }
//
// template <char N>
// void print()
// {
//     std::cout <<N<<std::endl;
// }
template <auto N>
void print()
{
    std::cout <<N<<std::endl;
}
int main()
{
    print<5>();
    print<'c'>();
    return 0;
}