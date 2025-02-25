// #include <iostream>
// #include <cstdint>
// int main()
// {
//     std::cout << "Enter a single character : ";
//     std::int8_t myInt{};
//     std::cin >> myInt;
//     std::cout << "You entered "<<myInt<<" which has ASCII cod "<< static_cast<int>(myInt);
// }

#include <iostream>

int main()
{
    std::cout <<"Enter a single character : ";
    char myInt{};
    std::cin >> myInt;
    std::cout <<"You entered '"<<myInt<<"', which has ASCII code " << static_cast<int>(myInt);
}