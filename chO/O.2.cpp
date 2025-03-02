#include <bitset>
#include <iostream>

int main()
{
    std::bitset<4>x{0b1100};

    std::cout <<x <<std::endl;
    std::cout <<(x>>1)<<std::endl;
    std::cout <<(x<<1)<<std::endl;
    return 0;
}