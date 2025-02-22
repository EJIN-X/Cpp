#include <iostream>

int doubleNumber(int x)
{
    return 2*x;
}
int main()
{
    std::cout<< "Type one integer : ";
    int num{};
    std::cin >> num;
    std::cout <<"Twice the Number is : "<< doubleNumber(num);
}