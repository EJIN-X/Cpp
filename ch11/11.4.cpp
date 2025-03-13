#include <iostream>

// void printInt(int x)
// {
//     std::cout<<x<<std::endl;
// }
//
// void printInt(char)=delete;
// void printInt(bool)=delete;
//
// int main()
// {
//     printInt(97);
//
//     printInt('a');
//     printInt(5.0);
//     printInt(5);
// }

void printInt(int x)
{
    std::cout <<x<<std::endl;
}
template <typename T>
// void printInt(T x)=delete;

int main()
{
    printInt(97);
    printInt('a');

    return 0;
}