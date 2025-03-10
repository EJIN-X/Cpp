#include <iostream>

void spam(int timesToPrint)
{
    for (int count{0};count <timesToPrint;++count)
        std::cout <<"Spam! ";
}