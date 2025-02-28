#include <iostream>
#include <string>

//Used to Enter name
std::string inputname()
{
    std::cout << "Enter your full name : ";
    std::string name{};
    std::getline(std::cin >> std::ws,name);
    return name;

}

//Used to Enter age
int inputage()
{
    std::cout << "Enter your age : ";
    int age{};
    std::cin >> age;
    return age;
}

//Used to change Name into length
int countname(std::string x)
{
    int length{static_cast<int>(x.length())};
    return length;
}

//fn that add two input
int addfn(int x, int y)
{
    return x+y;
}

//main

int main()
{
    int added{addfn(inputage(),countname(inputname()))};
    std::cout << "Your age + length of name is : "<<added;
}