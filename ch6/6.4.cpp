#include <iostream>

int main()
{
    int x{5};
    int y{++x};
    std::cout << x << ' '<<y<<std::endl;
    return 0;
}

// int main()
// {
//     int x{5};
//     int y{x++};
//     std::cout << x << ' '<<y<<std::endl;
//     return 0;
// }