#include <iostream>

// int min(int x, int y)
// {
//     return (x<y)?x:y;
// }
//
// int main()
// {
//     std::cout << min(5,6)<<std::endl;
// }

// int main()
// {
//     std::cout << ((5 < 6) ? 5 : 6) << std::endl;
//     std::cout << ((3 < 2) ? 3 : 2) << std::endl;
//     return 0;
// }


// double circumference(double radius);
// inline double pi()
// {
//     return 3.141592;
// }
// int main()
// {
//     std::cout << pi()<<std::endl;
//     std::cout << circumference(2.0)<<std::endl;
//
//     return 0;
// }

#include "pi.h"
double circumference(double radius);
int main()
{
    std::cout << pi()<<std::endl;
    std::cout <<circumference(2.0)<<std::endl;

    return 0;
}