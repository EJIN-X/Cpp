#include <iostream>
struct Employee
{
    int id{};
    int age{};
    double wage{};
};

int main()
{
    Employee joe{};
    joe.id=14;
    joe.age=32;
    joe.wage = 60000.0;

    Employee frank{};
    frank.id=15;
    frank.age=28;
    frank.wage=4500.0;

    int totalAge{joe.age+frank.age};
    std::cout << "Joe and Frank have lived "<< totalAge<<" total years\n";

    if (joe.wage>frank.wage)
        std::cout <<"Joe Make more than Frank"<<std::endl;
    else if (joe.wage < frank.wage)
        std::cout <<"Joe Makes less than Frank"<<std::endl;
    else
        std::cout <<"Joe and Frank make the same amount"<<std::endl;

    frank.wage+=5000.0;

    ++joe.age;

    return 0;
}