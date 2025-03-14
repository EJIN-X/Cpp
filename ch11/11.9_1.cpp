#include <iostream>

template <auto N>
constexpr int factorial()
{
    static_assert(N>=0);
    int temp{N};
    if (N==0)
    {
        return 1;
    }
    // else if (N<0)
    // {
    //     return false;
    // }
    else
    {
        for (int count{temp-1};count!=0;--count)
        {
            temp*=count;
        }
        return temp;
    }
}


int main()
{
    static_assert(factorial<0>() == 1);
    static_assert(factorial<3>() == 6);
    static_assert(factorial<5>() == 120);

    factorial<-3>();

    return 0;
}