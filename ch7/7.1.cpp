#include <iostream>

int main()
{
    std::cout << "Enter an integer : ";
    int value{};
    std::cin >> value;

    if (value>=0)
    {
        std::cout << value << " is a positive integer (or zero)\n";
        std::cout << "Double this number is "<< value*2 <<std::endl;
    }
    else
    {
        std::cout <<value <<" is a negative number "<<std::endl;
        std::cout << "The postive number if " <<-value <<std::endl;
    }
    return 0;
}