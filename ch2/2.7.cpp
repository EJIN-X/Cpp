#include <iostream>
int add(int x, int y)
{
    return x+y;
}

int main()
{
    std::cout << "Insert two intgers : \n";
    int num1{};
    int num2{};
    std:: cin >> num1;
    std:: cin >> num2;
    std::cout << "Sum : " << add(num1,num2);

}

// int doMath(int first, int second, int third, int fourth);
// int main()
// {
//     std::cout << "insert four numbers";
//     int a{};
//     int b{};
//     int c{};
//     int d{};
//     std::cin >> a;
//     std::cin >> b;
//     std::cin >> c;
//     std::cin >> d;
//     std::cout << doMath(a,b,c,d);
// }
// int doMath(int first, int second, int third, int fourth)
// {
//     return first + second * third / fourth;
// }

// #include <iostream>
// int add(int x , int y);
//
// int main()
// {
//     std::cout<<add(3,4);
//     return 0;
// }
// int add(int x, int y ,int z)
// {
//     return x+y+z;
// }