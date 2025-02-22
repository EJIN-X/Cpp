#include <iostream>
// void doPrint(){
//   std:: cout << "In Doprint";
// }
//
// int main(){
//   std::cout <<"In main";
//   doPrint();
// }

void doB()
{
    std::cout << "HI this is doB fn\n";
}
void doA()
{
    doB();
    std::cout << "HI this is doA fn introducing doB\n";
}
int main()
{
    std::cout <<"I'm introducing doA and doB\n";
    doB();
    doA();
    return 0;
}