#include <limits>
#include <iostream>
void ignoreLine()
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
}

// double getDouble()
// {
//     while (true)
//     {
//         std::cout <<"Enter a decimal number : ";
//         double x{};
//         std::cin>>x;
//
//         if (!std::cin)
//         {
//             std::cin.clear();
//             ignoreLine();
//             continue;
//         }
//         ignoreLine();
//         return x;
//     }
// }

double getDouble()
{
    while (true)
    {
        std::cout <<"Enter a decimal number : ";
        double x{};
        std::cin>>x;

        bool success{std::cin};
        std::cin.clear();
        ignoreLine();
        if (success)
            return x;
    }
}