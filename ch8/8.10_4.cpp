#include <iostream>
 void fizzbuzz(int x)
{
    if (x%3==0 && x%5==0)
        std::cout << "fizzbuzz"<<std::endl;
    else if (x%3==0 && x%5!=0)
        std::cout << "fizz"<<std::endl;
    else if (x%3!=0 && x%5==0)
        std::cout << "buzz"<<std::endl;
    else
        std::cout << x<<std::endl;
}

int main()
{
     int x{};
     std::cout << "Enter an integer : ";
     std::cin >>x;
     for (int temp{1};temp<=x;++temp)
         fizzbuzz(temp);
     return 0;
}