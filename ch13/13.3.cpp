#include <iostream>

// enum Color
// {
//     black,
//     red,
//     blue,
//     green,
// };
//
// int main()
// {
//     Color shirt{blue};
//     return 0;
// }

enum Animal
{
    cat=-3,
    dog,
    pig,
    horse =5,
    giraffe=5,
    chicken,
};

int main()
{
    Animal a{horse};
    std::cout <<a;
    return 0;
}