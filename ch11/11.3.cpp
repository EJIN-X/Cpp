#include <iostream>

// void print(int x)
// {
//     std::cout <<x<<std::endl;
// }
// void print(double d)
// {
//     std::cout <<d<<std::endl;
// }
//
// int main()
// {
//     print(5);
//     print(6.7);
//     print('a');
// }

void foo(const int)
{

}
void foo(const double)
{

}

int main()
{
    int x{1};
    foo(x);

    return 0;
}