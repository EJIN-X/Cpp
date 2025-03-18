#include <iostream>

// int main()
// {
//     int x{5};
//     std::cout <<x<<std::endl;
//     std::cout <<&x<<std::endl;//it prints the memory address
//
//     std::cout << *(&x)<<std::endl; // print the value at the memory address of variable x
//     return 0;
// }

// int main()
// {
//     int x{5};
//     std::cout <<x<<std::endl;
//     int* ptr{&x};
//     std::cout <<*ptr<<std::endl;
//
//     return 0;
// }

// int main()
// {
//     int i{5};
//     double d{7.0};
//
//     int* iPtr{&i};
//     // int* iPtr2{&d};
//     // double* dPtr{&i};
//     double* dPtr2{&d};
//
// }
// int main()
// {
//     int x{5};
//     int* ptr{&x};
//     std::cout <<x<<std::endl;
//     std::cout <<*ptr<<std::endl;
//
//     *ptr=6;
//
//     std::cout <<x<<std::endl;
//     std::cout <<*ptr<<std::endl;
//
//     return 0;
// }

// int main()
// {
//     int x{5};
//     int& ref{x};
//     int* ptr{&x};
//
//     std::cout <<x<<std::endl;
//     std::cout <<ref<<std::endl;
//     std::cout <<*ptr<<std::endl;
//
//     ref=6;
//     std::cout <<x<<std::endl;
//     std::cout <<ref<<std::endl;
//     std::cout <<*ptr<<std::endl;
//
//     *ptr=7;
//     std::cout <<x;
//     std::cout <<ref;
//     std::cout <<*ptr;
// }

// #include <typeinfo>
// int main()
// {
//     int x{4};
//     std::cout <<typeid(x).name()<<std::endl;
//     std::cout <<typeid(&x).name()<<std::endl;
// }

// int main()
// {
//     char* chPtr{};
//     int* iPtr{};
//     long double* ldPtr{};
//
//     std::cout <<sizeof(chPtr)<<std::endl;
//     std::cout <<sizeof(iPtr)<<std::endl;
//     std::cout <<sizeof(ldPtr)<<std::endl;
// }

int main()
{
    int x{5};
    int* ptr{&x};
    std::cout <<*ptr<<std::endl;
    {
        int y{6};
        ptr =&y;
        std::cout <<*ptr<<std::endl;
    }
    std::cout <<*ptr<<std::endl;
    return 0;
}