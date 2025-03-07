#include <iostream>
int sumTo(int x)
{
    int temp{0};
    for (int num{1};num<=x;++num)
        temp+=num;
    return temp;
}

int main()
{
    int x{};
    std::cout<<"type an integer : ";
    std::cin >>x;
    std::cout <<sumTo(x);
    return 0;
}