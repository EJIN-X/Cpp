#include <iostream>
#include <bitset>
// int main()
// {
//     int bin{};
//     bin=0b1;
//     bin=0b11;
//     bin=0b1011'0010;
//     long value{2'132'673'462};
//     std::cout << bin;
//     std::cout << value;
//
// }

int main()
{
    // std::bitset<8> means we want to store 8 bits
    std::bitset<8> bin1{ 0b1100'0101 }; // binary literal for binary 1100 0101
    std::bitset<8> bin2{ 0xC5 }; // hexadecimal literal for binary 1100 0101

    std::cout << bin1 << '\n' << bin2 << '\n';
    std::cout << std::bitset<4>{ 0b1010 } << '\n'; // create a temporary std::bitset and print it

    return 0;
}