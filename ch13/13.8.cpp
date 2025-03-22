#include <iostream>

// struct Employee
// {
//     int id{};
//     int age{};
//     double wage{};
// };
//
// int main()
// {
//     Employee frank{2,28,45000.0}
// }

// struct Employee
// {
//     int id{};
//     int age{};
//     double wage{};
// };
//
// std::ostream& operator <<(std::ostream& out,const Employee& e)
// {
//     out <<e.id<<' '<<e.age<<' '<<e.wage;
//     return out;
// }
//
// int main()
// {
//     Employee joe{2,28};
//     // Employee frank{.id{1},.wage{300.0}};
//     std::cout <<joe<<std::endl;
//     joe={joe.id,33,42340};
//     std::cout <<joe<<std::endl;
//
//     // std::cout <<frank;
// }

#include <iostream>

struct Foo
{
    int a{};
    int b{};
    int c{};
};

std::ostream& operator << (std::ostream& out, const Foo& f)
{
    out <<f.a<<' '<<f.b<<' '<<f.c;
    return out;
}

int main()
{
    Foo foo{1,2,3};
    Foo x=foo;
    Foo y(foo);
    Foo z{foo};
    std::cout <<x<<std::endl;
    std::cout <<y<<std::endl;
    std::cout <<z<<std::endl;

    return 0;
}