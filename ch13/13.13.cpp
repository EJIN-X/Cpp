#include <iostream>
// template <typename T>
// T max(T x,T y)
// {
//     return(x<y)?y:x;
// }
//
// int main()
// {
//     std::cout << max(5,6);
//     std::cout <<std::endl;
//     std::cout <<max(1.2,3.4);
//     return 0;
// }
//

#include <iostream>

// template <typename T>
// struct Pair
// {
//     T first{};
//     T second{};
// };
//
// template <typename T>
// constexpr T max(Pair<T> p)
// {
//     return (p.first<p.second?p.second:p.first);
// }
//
// int main()
// {
//
//     Pair<int> p1{5,6};
//     std::cout <<max<int>(p1)<<std::endl;
//
//     Pair<double> p2{1.3,4.4};
//     std::cout <<max<double>(p2)<<std::endl;
//
//     // Pair<int> p1{5,6};
//     // std::cout <<p1.first<<' '<<p1.second<<std::endl;
//     //
//     // Pair<double> p2{1.2,3.5};
//     // std::cout <<p2.first<<' '<<p2.second<<std::endl;
//
//     return 0;
// }

// template <typename T, typename U>
// struct Pair
// {
//     T first{};
//     U second{};
// };
//
// // template <typename T, typename U>
// // void print(Pair<T,U> p)
// // {
//      // std::cout <<'['<<p.first<<", "<<p.second<<']';
// // }
//
// template <typename T>
// void print(T p)
// {
//     std::cout <<'['<<p.first<<", "<<p.second<<']';
// }
//
// int main()
// {
//     Pair<int,double> p1{1,2.3};
//     Pair<double, int> p2{4.5,6};
//     Pair<int,int> p3{7,8};
//
//     print(p2);
//     print(p1);
//     print(p3);
// }

#include <utility>

template <typename T, typename U>
void print(std::pair<T,U> p)
{
    std::cout <<'['<<p.first<<", "<<p.second<<']';
}

int main()
{
    std::pair<int,double> p1{1,2.3};
    std::pair<double,int> p2{4.5,6};
    std::pair<int,int> p3{7,8};

    print(p2);

}