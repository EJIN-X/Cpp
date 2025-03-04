#include <iostream>
int main()
{
    constexpr double gravity{9.8};
    if constexpr (gravity==9.8)
        std::cout << "Gravity is normal "<<std::endl;
    else
        std::cout << "We are not on earth";

    return 0;
}