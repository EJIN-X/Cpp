#include <iostream>

int main()
{
    int x{10};
    int y{4};

    // std::cout <<(double)x/y<<std::endl;
    std::cout <<static_cast<double>(x)/y<<std::endl;
    return 0;
}