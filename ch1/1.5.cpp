#include <iostream>
//std::cout allows us to send data to the console to be printed as text
int main()
{
    // std::cout << "hello ppl\n";
    // std::cout << 3;
    // int x{5};
    // std::cout << x << "\n";
    // std::cout <<"I'm learning" << "C++";
    // std::cout << "adding" <<x << std::endl;
    // std::cout << "HI!"<<std::endl;
    // std::cout << "My name is JIN" << "\n";
    // std::cout << "Enter a number" << "\n";
    // int y{};
    // std::cin >> y;
    // std::cout << "You entered" << y;

    std::cout << "Enter 2 numbers";
    int z{};
    int w{};
    std::cin>> z>> w;
    std::cout <<"You entered "<< z << "and" << w;

    std::cout << "Enter 2 numbers";
    int k{};
    std::cin >>k;
    int fe{};
    std::cin >>fe;
    std::cout <<"You entered "<< k << "and" << fe;


    return 0;
}