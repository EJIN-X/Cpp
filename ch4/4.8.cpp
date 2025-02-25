#include <iostream>
#include <iomanip>

// int main()
// {
//     std::cout <<5.0 <<'\n';
//     std::cout <<6.7f<<'\n';
//     std::cout <<9876543.21<<'\n';
//     return 0;
// }

int main()
{
    std::cout <<std::setprecision(17);
    std::cout <<3.33333333333333333333333333f<<'\n';
    std::cout <<3.333333333333333333333333333333<<'\n';
    return 0;
}