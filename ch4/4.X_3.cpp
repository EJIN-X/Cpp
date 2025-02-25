#include <iostream>

//fn that calulate the ball location
double location(double height, double time)
{
    double gravity_constant{9.8};
    double distance_fallen{gravity_constant*time*time/2};
    if (distance_fallen>height)
        return 0;
    else
        return height-distance_fallen;

}


//main(height of tower)
int main()
{
    double height{};
    std::cout << "Enter the height of the tower in meters : ";
    std::cin >> height;
    std::cout <<"At 0 seconds, the ball is at height : "<<location(height,0)<<'\n';
    std::cout <<"At 1 seconds, the ball is at height : "<<location(height,1)<<'\n';
    std::cout <<"At 2 seconds, the ball is at height : "<<location(height,2)<<'\n';
    std::cout <<"At 3 seconds, the ball is at height : "<<location(height,3)<<'\n';
    std::cout <<"At 4 seconds, the ball is at height : "<<location(height,4)<<'\n';
    std::cout <<"At 5 seconds, the ball is at height : "<<location(height,5)<<'\n';
    return 0;
}