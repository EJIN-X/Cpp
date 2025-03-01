#include <iostream>
//isEven fn
constexpr bool isEven(int x)
{
    return x%2==0;
}

//main
int main()
{
    std::cout <<"Enter an integer : "<< std::endl;
    int x{};
    std::cin>>x;
    if (isEven(x)==1)
        std::cout<<"It's even"<<std::endl;
    else
        std::cout<<"It's odd"<<std::endl;
    return 0;
}