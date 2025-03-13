// #include <iostream>
//
// template <typename T>
// T max(T x,T y)
// {
//     return (x<y)?y:x;
// }
//
// int main()
// {
//     std::cout << max<double>(2.2,7.5);
// }

// template <typename T>
// int someFcn(T,double)
// {
//     return 5;
// }
//
// int main()
// {
//     someFcn(1,3.4);
//     someFcn(1,3.4f);
//     someFcn(1.2,3.4);
//     someFcn(1.2f,3.4);
//     someFcn(1.2f,3.4f);
// }

#include <iostream>

// template <typename T>
// T addOne(T x)
// {
//     return x+1;
// }
//
// int main()
// {
//     std::cout <<addOne(1)<<std::endl;
//     std::cout <<addOne(2.3)<<std::endl;
//     std::string hello{"Hello world!"};
//     std::cout <<addOne(hello)<<std::endl;
// }

#include <iostream>

// template <typename T>
// void print(T val, int times=1)
// {
//     while (times--)
//     {
//         std::cout <<val;
//     }
// }
//
// int main()
// {
//     print(5);
//     print('a',3);
//     return 0;
// }

template <typename T>
void printIDAndValue(T value)
{
    static int id{0};
    std::cout <<++id<<") "<<value<<std::endl;
}

int main()
{
    printIDAndValue(12);
    printIDAndValue(13);
    printIDAndValue(14.5);
    return 0;


}