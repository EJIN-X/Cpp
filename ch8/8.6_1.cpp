#include <iostream>
//calculator
void calc(int x, int y, char z)
{
    switch (z)
    {
    case '+':
        std::cout <<x+y<<std::endl;
        return;
    case '-':
        std::cout <<x-y<<std::endl;
        return;
    case '*':
        std::cout <<x*y<<std::endl;
        return;
    case '/':
        std::cout <<x/y<<std::endl;
        return;
    case '%':
        std::cout <<x%y<<std::endl;
        return;
    default:
        std::cout <<"Error";
        return;
    }
}
//get Number
int getNumber()
{
    std::cout << "Enter an integer : "<<std::endl;
    int x{};
    std::cin >> x;
    return x;
}

//get Operator
char getOperator()
{
    std::cout << "Enter an operator : "<<std::endl;
    char x{};
    std::cin>>x;
    return x;
}

int main()
{
    calc(getNumber(),getNumber(),getOperator());
    return 0;
}