#include <iostream>
#include <string_view>
// void print(int x,int y=4)
// {
//     std::cout <<"x: "<<x<<std::endl;
//     std::cout <<"y: "<<y<<std::endl;
// }
//
// int main()
// {
//     print(1,2);
//     print(3);
//     return 0;
// }

// void print(int x=10, int y=20, int z=30)
// {
//     std::cout <<"Values : "<<x<< " "<<y<<" "<<z<<std::endl;
// }
//
// int main()
// {
//     print(1,2,3);
//     print(1,2);
//     print(1);
//     print();
//
//     return 0;
// }

// void print(std::string_view s)
// {
//     std::cout << s<< std::endl;
// }
//
// void print(char c= ' ')
// {
//     std::cout <<c<<std::endl;
// }
//
// int main()
// {
//     print("Hello, world");
//     print('a');
//     print();
//
//     return 0;
// }

void print(int x);                  // signature print(int)
void print(int x, int y = 10);      // signature print(int, int)
void print(int x, double y = 20.5); // signature print(int, double)

int main()
{
    print(1, 2);   // will resolve to print(int, int)
    print(1, 2.5); // will resolve to print(int, double)
    print(1);      // ambiguous function call

    return 0;
}