#include <iostream>

int getValue()
{
    std::cout << "Enter a number : ";
    int x{};
    std::cin >> x;
    return x;
}

int main()
{
    int x{getValue()};
    int y{getValue()};
    int max{(x>y) ? x: y};
    std::cout << "Max of "<<x<<" and "<< y << " is "<< max;
    return 0;
}

