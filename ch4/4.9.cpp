#include <iostream>

// int main()
// {
//     std::cout << true <<'\n';
//     std::cout <<!true <<'\n';
//
//     bool b{false};
//     std::cout <<b <<'\n';
//     std::cout <<!b << '\n';
//
//     std::cout <<std::boolalpha;
//     std::cout <<b <<'\n';
//     std::cout <<!b << '\n';
//     std::cout <<std::noboolalpha;
//     std::cout <<!b << '\n';
//
//     return 0;
// }

// int main()
// {
//     bool b{};
//     std::cout << "Enter a boolean value";
//     std:: cin>>std::boolalpha;
//     std::cin >> b;
//     // std::cout <<std::boolalpha;
//     std::cout << "You entered" << b;
//     return 0;
// }

bool isEqual(int x, int y)
{
    return x==y;
}
int main()
{
    std::cout <<"Enter an integer : ";
    int x{};
    std::cin >>x;

    std::cout <<"Enter another integer : ";
    int y{};
    std::cin >>y;

    std::cout <<std::boolalpha;
    std::cout <<x<<" and "<<y<<" are equal?\n";
    std::cout << isEqual(x,y) << '\n';
    return 0;
}