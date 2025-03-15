#include <iostream>
// int main()
// {
//     const int x{5};
//     const int& ref{x};
//
//     std::cout<<x<<ref<<std::endl;
//     return 0;
// }

// int main()
// {
//     const int& ref{5};
//     std::cout <<ref<<std::endl;
//
//     return 0;
// }

// int main()
// {
//     const double& r1{5};
//     std::cout <<r1<<std::endl;
//
//     char c{'a'};
//     const int& r2{c};
//     std::cout <<r2<<std::endl;
//
//     return 0;
// }

int main()
{
    const int& ref{5};
    std::cout <<ref<<std::endl;

    return 0;
}