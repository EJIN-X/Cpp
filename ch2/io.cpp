#include <iostream>
//readNumber
int readNumber()
{
    int input{};
    std::cout<<"Insert an integer : ";
    std::cin >>input;
    return input;
}

//writeAnswer
void writeAnswer(int outcome)
{
    std::cout<< "The sum is : " << outcome;
}