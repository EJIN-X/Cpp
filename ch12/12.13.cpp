#include <iostream>

// void print(int x)
// {
//     std::cout <<x<<std::endl;
// }
//
// void print(const std::string& s)
// {
//     std::cout <<s<<std::endl;
// }
//
// int main()
// {
//     print(5);
//     std::string s{"Hello, world!"};
//     print(s);
//
//     return 0;
// }

// #include <cmath>
// void getSinCos(double degrees,double& sinOut, double& cosOut)
// {
//     constexpr double pi {3.14153453};
//     double radians=degrees*pi/180.0;
//     sinOut=std::sin(radians);
//     cosOut=std::cos(radians);
// }
//
// int main()
// {
//     double sin{0.0};
//     double cos{0.0};
//
//     double degrees{};
//     std::cout <<"Enter the number of degrees: ";
//     std::cin>>degrees;
//
//     getSinCos(degrees,sin,cos);
//     std::cout <<"The sin is "<<sin<<std::endl;
//     std::cout <<"The cos is "<<cos <<std::endl;
//
//     return 0;
// }

int getByValue()
{
    return 5;
}

void getByReference(int& x)
{
    x=5;
}

int main()
{
    [[maybe_unused]]int x{getByValue()};
    std::cout <<getByValue()<<std::endl;

    int y{};
    getByReference(y);
    std::cout <<y <<std::endl;

    return 0;
}

