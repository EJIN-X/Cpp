// #include <iostream>
//
// int main()
// {
//     int count {15};
//     while (count<=10)
//     {
//         std::cout << count << " ";
//         ++count;
//     }
//     std::cout <<"done!\n";
//     return 0;
// }

// #include <iostream>
//
// int main()
// {
//     int count{ 1 };
//     while (count <= 10);
//     {
//         std::cout << count << ' ';
//         ++count;
//     }
//
//     std::cout << "done!\n";
//
//     return 0;
// }

// #include <iostream>
// int main()
// {
//     unsigned int count{10};
//     while (count>=0)
//     {
//         if (count==0)
//         {
//             std::cout << "blast off!";
//         }
//         else
//         {
//             std::cout <<count << " ";
//         }
//         --count;
//     }
//     std::cout <<std::endl;
//     return 0;
// }

// #include <iostream>
// int main()
// {
//     int count{1};
//     while (count <=50)
//     {
//         if (count<10)
//         {
//             std::cout <<"0";
//         }
//         std::cout << count <<" ";
//         if (count%10==0)
//         {
//             std::cout <<std::endl;
//         }
//         ++count;
//     }
//     return 0;
//
// }
// #include <iostream>
//
// void printUpto(int outer)
// {
//     int inner{1};
//     while (inner<=outer)
//     {
//         std::cout <<inner <<" ";
//         ++inner;
//     }
// }
// int main()
// {
//     int outer{1};
//     while (outer <=5)
//     {
//         printUpto(outer);
//         std::cout <<std::endl;
//         ++outer;
//     }
//     return 0;
// }

#include <iostream>
int main()
{
    int outer{1};
    while (outer<=5)
    {
        int inner{1};
        while (inner<=outer)
        {
            std::cout <<inner<<" ";
            ++inner;
        }
        std::cout<<std::endl;
        ++outer;
    }
    return 0;
}