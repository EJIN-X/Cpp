#include <iostream>
int main()
{
    int space_n{5};
    while (space_n>0)
    {
        int print_n{1};
        while (space_n>print_n)
        {
            std::cout << " ";
            ++print_n;
        }
        while (print_n<=5)
        {
            std::cout << 6-print_n;
            ++print_n;

        }
        std::cout <<std::endl;
        --space_n;
    }
    return 0;
}