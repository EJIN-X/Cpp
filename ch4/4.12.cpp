#include <iostream>

// void print(int x)
// {
//     std::cout << x << '\n';
// }
//
// int main()
// {
//     print(static_cast<int>(5.5));
//     return 0;
// }

// int main()
// {
//     char ch{97};
//     std::cout <<ch <<" has a value of "<< static_cast<int>(ch);
//
//     return 0;
// }

// int main()
// {
//     int s { -1 };
//     std::cout << static_cast<unsigned int>(s) << '\n';
//
//     unsigned int u { 4294967295 };
//     std::cout << static_cast<int>(u) << '\n'; //int makes usigned into signed
//
//     return 0;
// }

#include <cstdint>

// int main()
// {
//     std::int8_t myInt{65};
//     std::cout << myInt << '\n';
//
//     return 0;
// }

int main()
{
    std::cout << "Enter a number between 0 and 127 : ";
    std::int8_t myInt{};
    std::cin >> myInt;
    std::cout <<"You have entered : " << static_cast<int>(myInt);
    return 0;
}