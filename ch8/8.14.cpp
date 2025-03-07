#include <iostream>
#include <random>

// int main()
// {
//     std::mt19937 mt{};
//
//     for (int count {1};count <=40; ++count)
//     {
//         std::cout <<mt()<<"\t";
//         if (count%5==0)
//         {
//             std::cout <<std::endl;
//         }
//     }
// }

// int main()
// {
//     std::mt19937 mt{};
//     std::uniform_int_distribution die6{1,6};
//     for (int count{1};count <=40;++count)
//     {
//         std::cout <<die6(mt)<<"\t";
//         if (count %10==0)
//             std::cout <<"\n";
//     }
//     return 0;
// }

// #include <chrono>
// int main()
// {
//     std::mt19937 mt{static_cast<std::mt19937_64::result_type>(std::chrono::steady_clock::now().time_since_epoch().count())};
//     std::uniform_int_distribution die6(1,6);
//
//     for (int count{1};count <=40;++count)
//     {
//         std::cout <<die6(mt)<<"\t";
//         if (count %10==0)
//             std::cout <<std::endl;
//     }
//     return 0;
//
// }

int main()
{
    std::mt19937 mt{std::random_device{}()};
    std::uniform_int_distribution die6{1,6};

    for (int count{1};count<=40;++count)
    {
        std::cout <<die6(mt)<<"\t";
        if (count %10 ==0)
            std::cout <<"\n";
    }
    return 0;
}