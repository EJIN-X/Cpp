#include <iostream>

// int main()
// {
//     int x{5};
//
//     {
//         int y{7};
//         std::cout << x << " + "<<y << " = " <<x+y;
//     }
//     return 0;
// }

int main()
{
    int x{2};
    {
        int x{3};
        std::cout << x;
    }
    std::cout << x;
    return 0;
}