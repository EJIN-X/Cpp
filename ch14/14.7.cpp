#include <iostream>
#include <string>

// const std::string& firstAlphabetical(const std::string& a, const std::string& b)
// {
//     return(a<b)?a:b;
// }
//
// int main()
// {
//     std::string hello{"Hello"};
//     std::string world{"World"};
//
//     std::cout <<firstAlphabetical(hello, world);
//     return 0;
// }

// class Employee
// {
//     std::string m_name{};
//
// public:
//     void setName(std::string_view name){m_name = name;}
//     // const std::string& getName() const {return m_name;}
//     const auto& getName() const {return m_name;}
// };
//
// int main()
// {
//     Employee joe{};
//     joe.setName("Joe");
//     std::cout << joe.getName();
//
//     return 0;
// }

#include <iostream>
#include <string>
#include <string_view>

class Employee
{
    std::string m_name{};

public:
    void setName(std::string_view name){m_name = name;}
    const std::string& getName()const{return m_name;}
};

Employee createEmployee(std::string_view name)
{
    Employee e;
    e.setName(name);
    return e;
}
