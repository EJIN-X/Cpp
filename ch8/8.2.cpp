#include <iostream>

void ifelse(bool a, bool b, bool c)
{
    if (a)
        std::cout << "a";
    else if (b)
        std::cout <<"b";
    else if (c)
        std::cout <<"c";
    std::cout <<std::endl;
}

void ifif(bool a, bool b, bool c)
{
    if (a)
        std::cout <<"a";
    if (b)
        std::cout <<"b";
    if (c)
        std::cout <<"c";
    std::cout<<std::endl;
}

int main()
{
    ifelse(false,true,true);
    ifif(false,true,true);

    return 0;
}