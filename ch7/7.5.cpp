#include <iostream>

// int main()
// {
//     int apples{5};
//     {
//         std::cout <<apples<<std::endl;
//         // int apples{};
//
//         apples=10;
//
//         std::cout <<apples<<std::endl;
//     }
//     std::cout <<apples;
//
//     return 0;
// }

int value{5};
void foo()
{
    std::cout << "global variable value : "<<value<<std::endl;
}
int main()
{
    int value{7};
    ++value;
    std::cout <<"local variable value : "<<value<<std::endl;

    foo();

    return 0;
}