#include <iostream>

// namespace Foo
// {
//     int doSomething(int x ,int y)
//     {
//         return x+y;
//     }
// }
//
// namespace Goo
// {
//     int doSomething(int x, int y)
//     {
//         return x-y;
//     }
// }
//
// int main()
// {
//     std::cout <<Foo::doSomething(4,3)<<std::endl;
//
//     return 0;
// }

// void print()
// {
//     std::cout << " there "<< std::endl;
// }
//
// namespace Foo
// {
//     void print()
//     {
//         std::cout << "Hello"<<std::endl;
//     }
// }
//
// int main()
// {
//     Foo::print();
//     print();
//
//     return 0;
// }


// void print() // this print() lives in the global namespace
// {
//     std::cout << " there\n";
// }
//
// namespace Foo
// {
//     void print() // this print() lives in the Foo namespace
//     {
//         std::cout << "Hello";
//     }
//
//     void printHelloThere()
//     {
//         print();   // calls print() in Foo namespace
//         ::print(); // calls print() in global namespace
//     }
// }
//
// int main()
// {
//     Foo::printHelloThere();
//
//     return 0;
// }

#include "add.h"
// int main()
// {
//     std::cout << BasicMath::add(4,3)<<std::endl;
//
//     return 0;
// }

// #include "circle.h"
// #include "growth.h"
//
// int main()
// {
//     std::cout << BasicMath::pi<<std::endl;
//     std::cout << BasicMath::e <<std::endl;
//
//     return 0;
// }

namespace FOO::GOO
{
    int add(int x,int y)
    {
        return x+y;
    }
}

int main()
{
    namespace  Active =FOO::GOO;
    std::cout << Active::add(3,5);

    return 0;
}