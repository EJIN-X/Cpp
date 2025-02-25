#include <iostream>

// int main()
// {
//     std::cout << "Enter an integer : ";
//     int x{};
//     std::cin>>x;
//     if (x==0)
//         std::cout << "The value is zero \n";
//     return 0;
// }

// int main()
// {
//     std::cout << "Enter an integer:\n";
//     int x{};
//     std::cin>>x;
//     if (x==0)
//         std::cout <<"The value is zero\n";
//     if (x!=0)
//         std::cout << "The value is non-zero\n";
//
//     return 0;
// }

// int main()
// {
//     std::cout << "Enter an integer : ";
//     int x{};
//     std::cin >> x;
//
//     bool zero{x==0};
//     if (zero)
//         std::cout <<"The value is zero \n";
//     if (!zero)
//         std::cout <<"The value is non-zero \n";
// }

// int main()
// {
//     std::cout << "Enter an integer : ";
//     int x{};
//     std::cin>>x;
//     if (x==0)
//         std::cout <<"The value is zero";
//     else
//         std::cout << "The value is non zero";
// }


// int main()
// {
//     std::cout <<"Enter an integer : ";
//     int x{};
//     std::cin >>x;
//     if (x>0)
//         std::cout <<"The value is positive \n";
//     else if (x<0)
//         std::cout << "The value is negative \n";
//     else
//         std::cout << "The value is zero \n";
// }

// bool isEqual(int x,int y)
// {
//     return x==y;
// }
// int main()
// {
//     std::cout <<"Enter an integer :";
//     int x{};
//     std::cin >> x;
//     std::cout <<"Enter an integer : ";
//     int y{};
//     std::cin >> y;
//
//     if (isEqual(x,y))
//         std::cout<<x<<" and " << y << " are equal \n";
//     else
//     {
//         std::cout <<x <<" and " << y << " are not equal \n";
//     }
// }

// int main()
// {
//     int x{0};
//     if (x)
//         std::cout <<"hi \n";
//     else
//         std::cout <<"bye \n";
//     return 0;
// }

int abs(int x)
{
    if (x<0)
        return -x;
    return x;
}
int main()
{
    std::cout <<abs(4)<<"\n";
    std::cout <<abs(-3)<<"\n";
    return 0;
}