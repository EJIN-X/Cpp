#include <iostream>

//fn that choose symbol and calculate
double cal(double x, double y, char z)
{
    if (z=='+')
        return x+y;
    else if (z=='-')
        return x-y;
    else if (z=='*')
        return x*y;
    else if (z=='/')
        return x/y;
    return 0.0;
}

int main()
{   //number input , symbol choosing
    double x{};
    double y{};
    char z{};
    std::cout << "Enter a double value : ";
    std::cin >> x;
    std::cout << "Enter a double value : ";
    std::cin >> y;
    std::cout << "Enter +, -, *, or / : ";
    std::cin >> z;
    std::cout << cal(x,y,z);
    return 0;
}




// int main()
// {   //number input , symbol choosing
//     double x{};
//     double y{};
//     char z{};
//     std::cout << "Enter a double value : ";
//     std::cin >> x;
//     std::cout << "Enter a double value : ";
//     std::cin >> y;
//     std::cout << "Enter +, -, *, or / : ";
//     std::cin >> z;
//     if (z=='+')
//         std::cout <<x+y;
//     else if (z=='-')
//         std::cout << x-y;
//     else if (z=='*')
//         std::cout << x*y;
//     else if (z=='/')
//         std::cout << x/y;
//
//     // std::cout << cal(x,y,z);
//     return 0;
// }
