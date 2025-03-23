#include <iostream>

struct Employee
{
    int id{};
    int age{};
    double wage{};
};

// void printEmployee(const Employee& e)
// {
//     std::cout <<"ID : "<<e.id<<std::endl;
//     std::cout <<"AGE : "<<e.age<<std::endl;
//     std::cout <<"WAGE : "<<e.wage<<std::endl;
// }
//
// int main()
// {
//     Employee joe{1,34,65000.0};
//     ++joe.age;
//     joe.wage=68000.0;
//
//     printEmployee(joe);
//
//     return 0;
// }

// int main()
// {
//     Employee joe{1,34,65000.0};
//     ++joe.age;
//     joe.wage=68000.0;
//     Employee* ptr{&joe};
//     std::cout <<ptr->id<<std::endl;
//
//     return 0;
// }

// struct Point
// {
//     double x{};
//     double y{};
// };
//
// struct Triangle
// {
//     Point* a{};
//     Point* b{};
//     Point* c{};
// };
//
// int main()
// {
//     Point a{1,2};
//     Point b{3,7};
//     Point c{10,2};
//
//     Triangle tr{&a,&b,&c};
//     Triangle* ptr{&tr};
//
//     std::cout <<ptr->c->y;
// }

struct Paw
{
    int claws{};
};

struct Animal
{
    std::string name{};
    Paw paw{};
};

int main()
{
    Animal puma{"puma",{5}};
    Animal* ptr{&puma};
    std::cout <<(ptr->paw).claws<<std::endl;
    return 0;
}