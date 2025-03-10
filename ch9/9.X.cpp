#include <iostream>
#include "random.h"

int tellhighlow(int x,int assume)
{
    if (x>assume)
        return 0;
    else if (x<assume)
        return 1;
    else
        return 2;
}

int usrnum()
{
    std::cout << "Enter an integer : ";
    int assume{};
    std::cin >> assume;
    return assume;
}

void playgame(int x)
{
    for (int count{};count <=7;++count)
    {
        int guess{usrnum()};
        int result{tellhighlow(x,guess)};
        switch (result)
        {
        case 0:
            std::cout <<"Too low"<<std::endl;
            break;
        case 1:
            std::cout <<"Too high"<<std::endl;
            break;
        case 2:
            std::cout <<"Correct you win"<<std::endl;
            return;
        }
        if (count ==7)
        {
            std::cout << "You've used all your guesses. The number was "<<x<<std::endl;
        }

    }
}


int main()
{
    const int x{Random::get(1,100)};
    std::cout << "Let's Play"<<std::endl;
    playgame(x);

    return 0;
}