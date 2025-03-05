#include <iostream>
// int main()
// {
//     char letter{65};
//     while (letter !=91)
//     {
//         std::cout << letter;
//         ++letter;
//     }
//     return 0;
// }

int main()
{
    char letter{'a'};
    while (letter <='z')
    {
        std::cout << letter << " "<< static_cast<int>(letter)<<std::endl;
        ++letter;
    }
}