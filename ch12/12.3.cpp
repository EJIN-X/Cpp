#include <iostream>

// int main()
// {
//     int x{5};
//     int& ref{x};
//     std::cout <<x<<ref<<std::endl;
//
//     x=6;
//     std::cout <<x<<ref<<std::endl;
//
//     ref=7;
//     std::cout <<x<<ref<<std::endl;
//     return 0;
// }

// int main()
// {
//     int x{5};
//     int y{8};
//     int& ref{x};
//
//     ref=y;
//
//     std::cout <<x<<std::endl;
//
//     return 0;
// }

int main()
{
    int x{5};
    {
        int& ref{x};
        std::cout <<ref<<std::endl;
    }
    std::cout <<x<<std::endl;

    return 0;
}