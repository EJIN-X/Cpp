#include <iostream>

//fn that lets user input
int num1()
{
    std::cout << "Enter an integer 0~9 : ";
    int x{};
    std::cin >> x;
    return x;
}

//main
int main()
{
    int x{num1()};
    if (x==2 or x==3 or x==5 or x==7)
        std::cout << "The digit is prime";
    else
        std::cout <<"The digit is not prime";

}