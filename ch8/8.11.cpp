#include <iostream>
// int main()
// {
//     int sum{0};
//
//     for (int count{0};count <10; ++count)
//     {
//         std::cout << "Enter a number to add ,or 0 to exit : ";
//         int num{};
//         std::cin >> num;
//         if (num==0)
//             break;
//         sum +=num;
//     }
//     std::cout << sum;
//
// }

int main()
{
    for (int count{0};count <10;++count)
    {
        if ((count %4)==0)
            continue;
        std::cout<< count <<std::endl;
    }
    return 0;
}