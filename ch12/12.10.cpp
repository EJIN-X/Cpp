// #include <iostream>
// #include <string>
//
// void printByValue(std::string val)
// {
//     std::cout <<val<<std::endl;
// }
//
// void printByReference(const std::string& kkk)
// {
//     std::cout <<kkk<<std::endl;
// }
//
// void printByAddresss(const std::string* ptr)
// {
//     std::cout <<*ptr<<std::endl;
// }
//
// int main()
// {
//     std::string str{"Hello world!"};
//
//     printByValue(str); //pass str by value,,, makes copy of str
//     printByReference(str); // pass str by reference,, does not make a copy of str
//     printByAddresss(&str); // pass str by address,, does not make a copy
//     return 0;
// }
#include <iostream>

// void changeValue(int* ptr)
// {
//     *ptr=6;
// }
//
// int main()
// {
//     int x{5};
//     std::cout <<"x = "<<x<<std::endl;
//     changeValue(&x);
//     std::cout <<"x = "<<x<<std::endl;
//
//     return 0;
// }

// void print(int* ptr)
// {
//     if (ptr)
//     {
//         std::cout <<*ptr<<std::endl;
//     }
// }

void print(int* ptr)
{
    if (!ptr)
        return;

    std::cout <<*ptr<<std::endl;
}

int main()
{
    int x{5};
    print(&x);
    print(nullptr);

    return 0;

}