#include <iostream>

// int main()
// {
//     std::cout << "Enter an integer : "<<std::endl;
//     int x{};
//     std::cin>>x;
//
//     std::cout << "Enter another integer : "<<std::endl;
//     int y{};
//     std::cin >>y;
//
//     std::cout << "The remainder is : "<<x%y <<std::endl;
//
//     if (x%y==0)
//         std::cout << x<< " is evenly divided by " << y<<std::endl;
//     else
//         std::cout << x << " is not evenly divided by "<<y<<std::endl;
//
//     return 0;
//
// }

bool isOdd(int x)
{
    return (x%2)==1;
}

int main()
{
    std::cout << "Enter an integer : "<< std::endl;
    int x{};
    std::cin>>x;
    std::cout << isOdd(x);
}