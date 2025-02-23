//that reads two separate integers from the user,(readNumberfn)
//adds them together,
//and then outputs the answer(writeAnswerfn..no return value)

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

//main
int main()
{
    int a{readNumber()};
    int b{readNumber()};
    writeAnswer(a+b);
    return 0;
}