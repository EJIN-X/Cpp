#include <iostream>

int main()
{
    int selection {};

    while (selection<1||selection >4)
    {
        std::cout <<"please make a selection: "<<std::endl;
        std::cin>>selection;
    }
    std::cout<<selection<<std::endl;
return 0;
}
