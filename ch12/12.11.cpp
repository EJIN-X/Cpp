#include <iostream>

// void printIDNumber(const int *id=nullptr)
// {
//     if (id)
//         std::cout <<"Your ID number is "<<*id<<std::endl;
//     else
//         std::cout <<"Your ID number is unknown"<<std::endl;
// }

void printIDNumber()
{
    std::cout <<"Your Id unknown";
}

void printIDNumber(int id)
{
    std::cout <<"Your ID is "<<id <<std::endl;
}

int main()
{
    printIDNumber();

    int userid{34};
    printIDNumber(userid);

    printIDNumber(62);

    return 0;
}