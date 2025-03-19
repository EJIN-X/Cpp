#include <iostream>
// #include <string>
//
// const std::string& getProgramName()
// {
//     static const std::string s_programName{"Calculator"};
//
//     return s_programName;
// }
//
// int main()
// {
//     std::cout <<"This program is named "<<getProgramName();
//     return 0;
// }

int& max(int& x,int& y)
{
    return (x>y)?x:y;
}

int main()
{
    int a{5};
    int b{6};

    max(a,b)=7;
    std::cout <<a<<b<<std::endl;

    return 0;
}