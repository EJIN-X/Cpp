#include <iostream>

void num(int x)
{
    switch (x)
    {
    case 1:
        std::cout <<1<<std::endl;
        return;
    case 2:
        std::cout <<2<<std::endl;
        [[fallthrough]];
    case 3:
        std::cout <<3 <<std::endl;
        return;

    }
}

int main()
{
    num(2);
}