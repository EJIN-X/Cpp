#include <iostream>

// int main()
// {
//     constexpr int x{7};
//     constexpr int y{4};
//
//     std::cout << "int / int = " << x / y << '\n';
//     std::cout << "double / int = " << static_cast<double>(x) / y << '\n';
//     std::cout << "int / double = " << x / static_cast<double>(y) << '\n';
//     std::cout << "double / double = " << static_cast<double>(x) / static_cast<double>(y) << '\n';
// }

int main()
{
    constexpr int apples{12};
    std::cout << "You have "<<apples<<" Enter How many ppl to divide them : "<<std::endl;
    int x{};
    std::cin >>x;
    std::cout << "Each Person will have "<<apples/x;

    return 0;
}