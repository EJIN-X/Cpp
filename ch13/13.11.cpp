#include <iostream>

// struct Employee
// {
//     int id{};
//     int age{};
//     double wage{};
// };
//
// struct Company
// {
//     int numberOfEmployees{};
//     Employee CEO{};
// };
//
// struct Company
// {
//     struct Employee
//     {
//         int id{};
//         int age{};
//         double wage{};
//     };
//
//     int numberOfEmployee{};
//     Employee CEO{};
//
// };
//
// int main()
// {
//     Company myCompany{7,{1,32,550000.0}};
//     std::cout<<myCompany.CEO.wage<<std::endl;
//
//     return 0;
//
// }

// #include <string>
// #include <string_view>
//
// struct Owner
// {
//     std::string name{};
// };
// struct Viewer
// {
//     std::string_view name{};
// };
//
// std::string getName()
// {
//     std::cout << "Enter a name : ";
//     std::string name{};
//     std::cin>>name;
//     return name;
// }
//
// int main()
// {
//     Owner o{getName()};
//     std::cout <<"The owners name is "<<o.name<<std::endl;
//     Viewer v{getName()};
//     std::cout <<"The viewrs name is "<<v.name<<std::endl;
//     return 0;
// }

struct Foo1
{
    short a{};
    int b{};
    short c{};
};

struct Foo2
{
    int b{};
    short a{};
    short c{};
};

int main()
{
    std::cout <<sizeof(Foo1)<<std::endl;
    std::cout <<sizeof(Foo2)<<std::endl;

}