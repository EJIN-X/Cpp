#include <iostream>
// int getValue()
// {
//     std::cerr<<"getValue() called \n";
//     return 4;
// }
// int main()
// {
//     std::cerr<<"main() called \n";
//         std::cout<<getValue()<<'\n';
//     return 0;
// }
int add(int x, int y)
{
    return x+y;
}

void printResult(int z)
{
    std::cout << "The answer is : " << z<< '\n';
}
int getUserInput()
{
    std::cout << "Enter a number : ";
    int x{};
    std::cin >> x;
    return x;
}
int main()
{
    int x{getUserInput()};
    std::cerr<<"main::x = "<<"\n";
    int y{getUserInput()};
    std::cerr<<"main::y = "<<"\n";
    int z{add(x,5)};
    std::cerr<<"main::z = "<<"\n";
    printResult(z);
        return 0;
}