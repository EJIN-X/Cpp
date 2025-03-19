#include <iostream>

// int main()
// {
//     int* ptr{};
//     int x{5};
//     ptr=&x;
//     std::cout <<*ptr<<std::endl;
//
//     return 0;
// }

// int main()
// {
//     int* ptr{nullptr};
//
//     int value{5};
//     int* ptr2{&value};
//     ptr2=nullptr;
//     return 0;
//
// }

int main()
{
    int x{5};
    int* ptr{&x};

    if (ptr==nullptr)
        std::cout <<"ptr is null"<<std::endl;
    else
        std::cout << "ptr is non-null"<<std::endl;

    int* nullPtr{};
    std::cout <<"nullPtr is "<<(nullPtr==nullptr?"null\n":"non-null\n");
    return 0;
}