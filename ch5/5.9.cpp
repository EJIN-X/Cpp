#include <iostream>
#include <string>
#include <string_view>

// int main()
// {
//     std::string s { "Hello, world!" };
//     std::string_view sv { s }; // sv is now viewing s
//
//     s = "Bye, ahhhh!";    // modifies s, which invalidates sv (s is still valid)
//     std::cout << sv << '\n';   // undefined behavior
//
//     sv=s;
//     std::cout <<sv<<std::endl;
//     return 0;
// }

int main()
{
    std::string_view str{"peach"};
    std::cout <<str<< std::endl;

    str.remove_prefix(1);
    std::cout <<str<<std::endl;

    str.remove_suffix(2);
    std::cout <<str<<std::endl;

    return 0;
}