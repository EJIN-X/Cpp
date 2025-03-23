#include <iostream>

// struct Employee
// {
//     int id{};
//     int age{};
//     double wage{};
// };
//
// void printEmployee(const Employee& employee)
// {
//     std::cout <<" ID : "<<employee.id<<std::endl;
//     std::cout <<" AGE : "<<employee.age<<std::endl;
//     std::cout <<" WAGE : "<<employee.wage<<std::endl;
//
// }

// int main()
// {
//     Employee joe{14,32,24.15};
//     Employee frank {15,28,18.27};
//
//     printEmployee(joe);
//     std::cout <<std::endl;
//     printEmployee(frank);
//
//     return 0;
// }

// int main()
// {
//     printEmployee(Employee { 14, 32, 24.15 }); // construct a temporary Employee to pass to function (type explicitly specified) (preferred)
//
//     std::cout << '\n';
//
//     printEmployee({ 15, 28, 18.27 }); // construct a temporary Employee to pass to function (type deduced from parameter)
//
//     return 0;
// }

struct Point3d
{
    double x{0.0};
    double y{0.0};
    double z{0.0};
};

Point3d getZeroPoint()
{
    Point3d temp{0.0,0.0,0.0};
    return temp;
}

int main()
{
    Point3d zero{getZeroPoint()};

    if (zero.x==0.0&&zero.y==0.0&&zero.z==0.0)
        std::cout <<"The point is zero"<<std::endl;
    else
        std::cout <<"The point is not zero\n";
    return 0;
}