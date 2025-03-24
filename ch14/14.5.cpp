// #include <iostream>
//
// class Date
// {
// public:
//     void print() const
//     {
//         std::cout <<m_year<<'/'<<m_month <<'/'<<m_day;
//     }
//
// private:
//     int m_year{2020};
//     int m_month{14};
//     int m_day{10};
// };
//
// int main()
// {
//     Date d{};
//     d.print();
//
//     return 0;
// }

#include <iostream>
#include <string>
#include <string_view>

class Person
{
private:
    std::string m_name{};

public:
    void kisses(const Person& p) const
    {
        std::cout <<m_name<<" kisses "<<p.m_name<<std::endl;
    }

    void setName(std::string_view name)
    {
        m_name =name;
    }
};

int main()
{
    Person joe;
    joe.setName("Joe");

    Person kate;
    kate.setName("Kate");

    joe.kisses(kate);

    return 0;
}