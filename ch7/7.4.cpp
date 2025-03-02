#include <iostream>

// int g_x{};
namespace Foo
{
    int g_x{};
}

void doSomething()
{
    Foo::g_x=3;
    std::cout << Foo::g_x<<std::endl;
}
int main()
{
    doSomething();
    std::cout<<Foo::g_x<<std::endl;

    Foo::g_x=5;
    std::cout <<Foo::g_x<<std::endl;

    return 0;
}