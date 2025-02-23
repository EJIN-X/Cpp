//that reads two separate integers from the user,(readNumberfn)
//adds them together,
//and then outputs the answer(writeAnswerfn..no return value)

#include <iostream>
#include "io.h"

//main
int main()
{
    int a{readNumber()};
    int b{readNumber()};
    writeAnswer(a+b);
    return 0;
}