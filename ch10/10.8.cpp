#include <iostream>

// int add(int x, int y)
// {
//     return x+y;
// }
//
// int main()
// {
//     auto sum{add(5,6)};
//     std::cout <<sum;
//     return 0;
// }
#include <string>
#include <string_view>

int main()
{
    using namespace std::literals;

    auto s1{"goo"s};
    auto s2{"moo"sv};

    std::cout << s1<<" "<<s2;
    return 0;
}