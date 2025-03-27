#include <iostream>
#include <string>
#include <string_view>

// struct Employee
// {
//     std::string name{"John"};
//     char firstInitial{'J'};
//
//     void print() const
//     {
//         std::cout << "Employee "<<name<<" has first initial "<<firstInitial<<std::endl;
//     }
// };
//
// int main()
// {
//     Employee e{};
//     e.print();
//
//     e.name = "Mark";
//     e.print();
// }

// class Employee
// {
//     std::string m_name{};
//     char m_firstInitial{};
//
// public:
//     void setName(std::string_view name)
//     {
//         m_name=name;
//         m_firstInitial=name.front();
//     }
//
//     void print() const
//     {
//         std::cout <<"Employee "<< m_name <<" has first initial "<<m_firstInitial<<std::endl;
//     }
// };
//
// int main()
// {
//     Employee e{};
//     e.setName("John");
//     e.print();
//
//     e.setName("Mark");
//     e.print();
//
//     return 0;
// }

// class Employee
// {
//     std::string m_name{"John"};
//
// public:
//     void setName(std::string_view name)
//     {
//         m_name = name;
//     }
//
//     char firstInitial() const{return m_name.front();}
//
//     void print() const
//     {
//         std::cout <<"Employee "<<m_name <<" has first initial "<<firstInitial()<<std::endl;
//     }
// };
//
// int main()
// {
//     Employee e{};
//     e.setName("Mark");
//     e.print();
//
//     return 0;
// }

// class Something
// {
// private:
//     int m_value1{};
//     int m_value2{};
//     int m_value3{};
//
// public:
//     void setValue1(int value){m_value1=value;}
//     int getValue1()const{return m_value1;}
// };
//
// int main()
// {
//     Something something;
//     something.setValue1(5);
//     std::cout <<something.getValue1()<<std::endl;
//
//     return 0;
// }

// class Something
// {
// private:
//     int m_value[3];
//
// public:
//     void setValue1(int value){m_value[0]=value;}
//     int getValue1() const {return m_value[0];}
// };
//
// int main()
// {
//     Something something;
//     something.setValue1(5);
//     std::cout <<something.getValue1()<<std::endl;
// }


// class Yogurt
// {
//     std::string m_flavor{"vanilla"};
//
// public:
//     void setFlavor(std::string_view flavor)
//     {
//         m_flavor=flavor;
//     }
//
//     const std::string& getFlavor() const {return m_flavor;}
//
//     void print(std::string_view prefix) const
//     {
//         std::cout <<prefix<<' '<<getFlavor()<<std::endl;
//     }
// };
//
// int main()
// {
//     Yogurt y{};
//     y.setFlavor("cherry");
//     y.print("The yogurt has flavor");
//
//     return 0;
// }


class Yogurt
{
    std::string m_flavor{"vanilla"};

public:
    void setFlavor(std::string_view flavor)
    {
        m_flavor = flavor;
    }

    const std::string& getFlavor() const{return m_flavor;}
};

void print(const Yogurt& y)
{
    std::cout <<"The yogurt has flavor "<<y.getFlavor()<<std::endl;
}

int main()
{
    Yogurt y{};
    y.setFlavor("cherry");
    print(y);

    return 0;
}