#include <bitset>
#include <iostream>

// int main()
// {
//     std::bitset<8>bits{0b0000'0101};
//     bits.set(3); //position3 to 1.. now 00001101
//     bits.flip(4);//flip bit 4.. now 00011101
//     bits.reset(4);//set bit 4 back.. now 00001101
//
//     std::cout << "All the bits : " <<bits << std::endl;
//     std::cout << "Bits 3 has value : "<<bits.test(3)<<std::endl;
//     std::cout << "Bits 4 has value : "<<bits.test(4);
//     return 0;
// }

#include <bitset>
#include <iostream>

int main()
{
    std::bitset<8> bits{ 0b0000'1101 };
    std::cout << bits.size() << " bits are in the bitset\n";
    std::cout << bits.count() << " bits are set to true\n";

    std::cout << std::boolalpha;
    std::cout << "All bits are true: " << bits.all() << '\n';
    std::cout << "Some bits are true: " << bits.any() << '\n';
    std::cout << "No bits are true: " << bits.none() << '\n';

    return 0;
}