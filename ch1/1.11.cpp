#include <iostream>
int main()
{
    std::cout <<"Enter an integer : ";
    int x{};
    std::cin >>x;
    std::cout <<"Double the number is : " << 2*x << "\n";
    std::cout <<"Triple the number is : " << 3*x;
    return 0;
}