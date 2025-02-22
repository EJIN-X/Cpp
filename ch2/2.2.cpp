#include <iostream>

int getValueFromUser()
{
    std::cout << "Enter an integer : ";
    int x{};
    std::cin >> x;
    return x;
}

int main()
{
    int num1{getValueFromUser()};
    int num2{getValueFromUser()};
    std::cout << "Sum of two numbers : " <<num1+num2;
}