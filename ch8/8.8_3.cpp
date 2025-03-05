#include <iostream>
int main()
{
    int max_n{5};
    while (max_n>0)
    {
        int minus_n{};
        while (minus_n<max_n)
        {
            std::cout << max_n-minus_n<<" ";
            ++minus_n;
        }
        std::cout <<std::endl;
        --max_n;
    }
    return 0;
}