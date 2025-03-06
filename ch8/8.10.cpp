#include <iostream>
// int main()
// {
//     for (int i{1};i<=10;++i)
//         std::cout <<i<<" "<<std::endl;
//     return 0;
// }

// int main()
// {
//     {
//         int i{1};
//         while (i<=10)
//         {
//             std::cout << i<<" ";
//             ++i;
//         }
//     }
//     std::cout <<std::endl;
// }

// #include <cstdint>
//
// std::int64_t pow(int base,int exponent)
// {
//     std::int64_t total{1};
//     for (int i{0};i<exponent;++i)
//         total *=base;
//     return total;
// }

// int main()
// {
//     for (int i{9};i>=0;--i)
//         std::cout <<i<<" ";
//     std::cout <<std::endl;
//
//     return 0;
// }

// int main()
// {
//     for (int i{0};i<10;++i)
//         std::cout <<i;
//
//     for (int i{0};i!=10;++i)
//         std::cout << i;
//
//     return 0;
// }

// int main()
// {
//     for (int x{0},y{9};x<10;++x,--y)
//         std::cout <<x<<" "<<y<<std::endl;
//
//     return 0;
// }

// int main()
// {
//     for (char c{'a'};c<='e';++c)
//     {
//         std::cout <<c;
//         for (int i{0};i<3;++i)
//             std::cout <<i;
//         std::cout <<std::endl;
//     }
//     return 0;
// }

int main()
{
    int i{};
    for (i=0;i<10;++i)
    {
        std::cout <<i<<" ";
    }
    std::cout <<std::endl;
    return 0;
}