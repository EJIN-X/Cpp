// #include <iostream>
// namespace
// {
//     void doSomething()
//     {
//         std::cout<<"v1\n";
//     }
// }
// int main()
// {
//     doSomething();
//     return 0;
// }

#include <iostream>

inline namespace V1
{
    void doSomething()
    {
        std::cout <<"V1"<<std::endl;
    }
}

namespace V2
{
    void doSomething()
    {
        std::cout <<"V2"<<std::endl;
    }
}

int main()
{
    V1::doSomething();
    V2::doSomething();
    doSomething();

    return 0;
}