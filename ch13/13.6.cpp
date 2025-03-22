// #include <iostream>
// int main()
// {
//     enum class Color
//     {
//         red,
//         blue,
//     };
//     enum class Fruit
//     {
//         banana,
//         apple,
//     };
//
//     Color color{Color::red};
//     Fruit fruit{Fruit::banana};
//
//     if (color == fruit)
//         std::cout << "Equal";
//     else
//         std::cout <<"Not equal";
//
//     return 0;
// }

// #include <iostream>
// int main()
// {
//     enum class Color
//     {
//         red,
//         blue,
//     };
//     Color shirt{Color::red};
//
//     if (shirt == Color::red)
//         std::cout <<"The shirt is red~! \n";
//     else if (shirt ==Color::blue)
//         std::cout <<"The shirt is blue~!\n";
//
//     return 0;
// }

// #include <iostream>
// int main()
// {
//     enum class Pet
//     {
//         cat,
//         dog,
//         pig,
//         whale,
//     };
//     std::cout << "Enter a pet ";
//     int input{};
//     std::cin >>input;
//     Pet pet{static_cast<Pet>(input)};
//
// }

#include <iostream>
#include <string_view>

enum class Color
{
    black,
    red,
    blue,
};

constexpr std::string_view getColor(Color color)
{
    using enum Color;

    switch (color)
    {
    case black: return "black";
    case red: return "red";
    case blue : return "blue";
    default: return "???";
    }
}

int main()
{
    Color shirt{Color::blue};
    std::cout <<"Your shirt is "<<getColor(shirt)<<std::endl;

    return 0;
}