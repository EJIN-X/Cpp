//std::string is hard to copy or initialize
//so std::string_view(Read only,,, we can access and use but not modify
#include <iostream>
#include <string_view>
#include <string>

//str provides read only access to whatever argument is passed on
// void printSV(std::string_view str)
// {
//     std::cout << str<<std::endl;
// }
//
// int main()
// {
//     std::string_view s{"Hello, World!"};
//     printSV(s);
//
//     return 0;
// }
//!!Prefer std::string_view over std::string when you need a read-only string, especially for function parameters.

// int main()
// {
//     std::string_view s1{"Hello, world!"};
//     std::cout << s1 << std::endl;
//
//     std::string s{"Hello, world!"};
//     std::string_view s2{s};
//     std::cout <<s2<<std::endl;
//
//     std::string_view s3{s2};
//     std::cout <<s3<<std::endl;
//
//     return 0;
// }

// void printSV(std::string_view str)
// {
//     std::cout <<str <<std::endl;
// }
//
// int main()
// {
//     printSV("Hello, world!");
//     std::string s2{"Hello, world!"};
//     printSV(s2);
//
//     std::string_view s3{s2};
//     printSV(s3);
//     return 0;
// }

// int main()
// {
//     std::string name{"Jin"};
//     std::string_view sv{name};
//     std::cout << sv << std::endl;
//
//     sv="John";
//     std::cout <<sv <<std::endl;
//     std::cout <<name << std::endl;
//     return 0;
// }

void printSV(std::string_view lll)
{
    std::cout <<lll<<std::endl;
}

int main()
{
    std::string_view s{"Hello world"};
    printSV(s);
    return 0;
}