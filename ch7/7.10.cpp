#include "constants.h"
#include <iostream>
int main()
{
    std::cout << "Enter a radius : ";
    double radius{};
    std::cin >> radius;

    std::cout << "The circumference is : "<<2*radius*constants::pi<<std::endl;

    return 0;
}