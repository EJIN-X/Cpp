#include <iostream>

// void printRef(const int& y)
// {
//     std::cout <<y<<std::endl;
// }
//
// int main()
// {
//     int x{5};
//     printRef(x);
//
//     const int z{5};
//     printRef(z);
//
//     printRef(5);
//
//     return 0;
// }

// void printVal(double d)
// {
//     std::cout <<d<<std::endl;
// }
// void printRef(const double& d)
// {
//     std::cout <<d<<std::endl;
// }
// int main()
// {
//     printVal(5);
//     printRef(5);
//
//     return 0;
// }

#include <string>
void foo(int a, int& b, const std::string& c)
{
    std::cout << a<<" "<<b<<" "<<c<<std::endl;
}

int main()
{
    int x{5};
    const std::string s{"Hello, world!"};
    foo(5,x,s);
    return 0;
}