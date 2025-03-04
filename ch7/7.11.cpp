#include <iostream>

void incrementAndPrint()
{
    static int value{1};
    ++value;
    std::cout << value <<std::endl;
}
int main()
{
    incrementAndPrint();
    incrementAndPrint();
    incrementAndPrint();

}
// int generateID()
// {
//     static int s_itemID{0};
//     return s_itemID++;
// }