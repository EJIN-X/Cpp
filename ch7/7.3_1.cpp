#include <iostream>

int main()
{
    //input smaller
    int smaller{};
    std::cout << "Enter an integer : "<<std::endl;
    std::cin >> smaller;

    //input bigger
    int bigger{};
    std::cout << "Enter a lager integer : "<<std::endl;
    std::cin>> bigger;

    //if-else swap
    if (smaller>bigger)
    {
        int temp{};
        temp=bigger;
        bigger=smaller;
        std::cout << "Swapping the values"<<std::endl;
        std::cout << "The smaller value is "<< temp << std::endl;
        std::cout << "The larger value is " << bigger <<std::endl;
    }
    else
    {
        std::cout << "The smaller value is "<< smaller<<std::endl;
        std::cout << "The larger value is "<< bigger <<std::endl;
    }
    return 0;
}