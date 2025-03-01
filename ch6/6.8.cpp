#include <iostream>
// int main()
// {
//     int x{5};
//     int y{7};
//
//     if (!(x>y))
//         std::cout << x<< " is not greater than " << y << std::endl;
//     else
//         std::cout << x << "is greater than " << y;
//
//     return 0;
// }

int main()
{
    std::cout << "Enter a number : ";
    int value {};
    std::cin >> value;

    if (value==0||value==1)
        std::cout <<"You picked 0 or 1 "<< std::endl;
    else
        std::cout <<"You did not pick 0 or 1";

    return 0;
}