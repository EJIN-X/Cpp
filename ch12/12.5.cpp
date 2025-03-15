#include <iostream>

// void printValue(int y)
// {
//     std::cout <<y <<std::endl;
// }
//
// int main()
// {
//     int x{2};
//
//     printValue(x);
//
//     return 0;
// }

// #include <string>
//
// void printValue(std::string& y)
// {
//     std::cout <<y <<std::endl;
// }
//
// int main()
// {
//     std::string x{ "Hello World!"};
//     printValue(x);
//
//     return 0;
// }

// void printAddresses(int val,int& ref)
// {
//     std::cout << "The address of the value parameter is "<<&val<<std::endl;
//     std::cout << "Ref para"<<&ref;
// }
//
// int main()
// {
//     int x{5};
//     std::cout << "The address of x is : "<<&x<<std::endl;
//     printAddresses(x,x);
//     return 0;
// }

// void addOne(int& y)
// {
//     ++y;
// }
// int main()
// {
//     int x{5};
//     std::cout << "value = "<<x<<std::endl;
//
//     addOne(x);
//     std::cout <<"value = "<<x<<std::endl;
//
//     return 0;
// }

void printValue(int& y)
{
    std::cout <<y<<std::endl;
}

int main()
{
    int x{5};
    printValue(x);

    const int z{5};
    printValue(z); //error,, has to be non-modifiable lvalue
    printValue(5); //error,, 5 is an rvalue
    return 0;
}