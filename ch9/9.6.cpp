#define NDEBUG
#include <cassert>
#include <cmath>
#include <iostream>
double calculateTimeUntilObjectHitsGround(double initialHeight,double gravity)
{
    assert(gravity >0.0);
    if (initialHeight<=0)
    {
        return 0.0;
    }
    return std::sqrt((2.0*initialHeight)/gravity);
}

int main()
{
    std::cout <<"Took "<<calculateTimeUntilObjectHitsGround(100.0,-9.8);
}