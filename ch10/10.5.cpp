#include <iostream>
#include <typeinfo>

// int main()
// {
//     int i{2};
//     std::cout <<typeid(i).name()<<std::endl;
//     double d{2.5};
//     std::cout <<typeid(d).name()<<std::endl;
//
//     std::cout <<typeid(i+d).name();
//
//     return 0;
// }

// int main()
// {
//     short a{4};
//     short b{5};
//     std::cout <<typeid(a+b).name()<<' '<<a+b;
//     return 0;
// }

int main()
{
    std::cout << typeid(5u-10).name()<<5u-10;
    //5u means treat 5 as unsigned
    return 0;
}