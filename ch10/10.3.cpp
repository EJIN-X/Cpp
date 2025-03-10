#include <iostream>

// int main()
// {
//     int n{5};
//     long l=n;
//     short s{5};
//     double d=s;
//     std::cout <<n<<l<<s<<d;
//     return 0;
// }

// int main()
// {
//     int n=static_cast<int>(static_cast<long>(3));
//     std::cout <<n<<std::endl;
// }
int main()
{
    int i{ 30000 };
    char c = i; // chars have range -128 to 127

    std::cout << static_cast<int>(c) << '\n';

    return 0;
}