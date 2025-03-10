#include "random.h"
#include <iostream>

//Asking to play again
char playagain()
{
    char option{};
    std::cout << "Do you like to play again (y/n)?";
    std::cin>>option;
    return option;
}

bool define{true};

void hilow(int guess,int x)
{
    if (guess>x)
        std::cout <<"Your guess is too high";
    else if (guess<x)
        std::cout <<"Your guess is too low";
    else
    {
        std::cout <<"Correct! You Win!"<<std::endl;
        define =false;
    }


}

int main()
{
    int value{1};
    while (value==1)
    {
        define=true;
        std::cout << "Let's play a game. I'm thinking of a number between 1 and 100. You have 7 tries to guess what it is."<<std::endl;
        const int x{Random::get(1,100)};
        int attempt{};

        for (attempt=1;7>=attempt;++attempt)
        {
            int guess{};
            std::cout <<"Guess #"<<attempt<<" : ";
            std::cin >>guess;
            hilow(guess,x);
            if (define==false)
                break;
            std::cout <<std::endl;
            std::cout <<x;
        }

        if (playagain()=='n')
            value=0;
    }
    std::cout<<"Thank you for playing.";
}