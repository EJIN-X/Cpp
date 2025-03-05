// #include <iostream>
// #include <cmath>
//
// int main()
// {
//     double x{};
//     tryAgain:
//     std::cout << "Enter a non-negative number : ";
//     std::cin >>x;
//     if (x<0.0)
//         goto tryAgain;
//     std::cout << "The square root of "<<x<<" is "<<std::sqrt(x)<<std::endl;
//     return 0;
// }
#include <iostream>

void printCats(bool skip)
{
    if (skip)
        goto end;
    std::cout <<"cats\n";
    end:
    ;
}

int main()
{
    printCats((true));
    printCats(false);
    return 0;
}