#include <iostream>

int doubleNumber(int x)
{
    return 2*x;
}

void showRslt(int x)
{
    std::cout<<"Twice the Number is : "<<doubleNumber(x);
}

int main()
{
    std::cout<< "Type one integer : ";
    int num{};
    std::cin >> num;
    showRslt(num);
}