#include <cstdlib>
#include <iostream>

// void cleanup()
// {
//     std::cout <<"cleanup"<<std::endl;
// }
// int main()
// {
//     std::cout <<1<<std::endl;
//     cleanup();
//     std::exit(0);
//
//     std::cout <<2<<std::endl;
//
//     return 0;
// }

void cleanup()
{
    std::cout <<"cleanup"<<std::endl;
}
int main()
{
    std::atexit(cleanup);
    std::cout <<1<<std::endl;
    std::exit(0);

    std::cout <<2<<std::endl;

    return 0;
}