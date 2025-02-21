#include <iostream>

int main()
{
    // int width;
    // width =5;
    //
    // std::cout<<width;
    //
    // width =7;
    // std::cout<<width;

    int width {5};
    std::cout << width;
    [[maybe_unused]]int var1{}; //value initialization
    [[maybe_unused]]int var2{3}; //direct list initialization
    //prefer above two methods!!
    return 0;
}