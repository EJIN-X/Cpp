#include <iostream>

void printDouble(double d)
{
    std::cout <<d <<std::endl;
}

void printInt(int x)
{
    std::cout <<x <<std::endl;
}
int main()
{
    printDouble(5.0);
    printDouble(4.0f);

    printInt(2);
    short s{3};
    printInt(s);

    printInt('a');
    printInt(true);

    return 0;
}