#include <iostream>
 void fizzbuzz(int x)
{
     if (x%3==0)
         std::cout <<"fizz";
     if (x%5==0)
         std::cout <<"buzz";
     if (x%7==0)
         std::cout <<"pop";
     if (x%3!=0 && x%5!=0 && x%7!=0)
         std::cout <<x;
}

int main()
{
     int x{};
     std::cout << "Enter an integer : ";
     std::cin >>x;
     for (int temp{1};temp<=x;++temp)
     {
         fizzbuzz(temp);
         std::cout << std::endl;
     }
     return 0;
}