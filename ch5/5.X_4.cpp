#include <iostream>
#include <string>
#include <string_view>

//fn that input name1
std::string name1()
{
    // std::cout << "Enter the name of person #1 : ";
    std::string name{};
    std::getline(std::cin >>std::ws,name);
    return name;
}


//main shows result
int main()
{
    std::cout <<"Enter the name of person #1 : ";
    std::string n1(name1());
    std::cout <<"Enter the age of "<< n1 <<" : ";
    int a1{};
    std::cin >> a1;
    std::cout <<"Enter the name of person #2 : ";
    std::string n2(name1());
    std::cout <<"Enter the age of "<< n2 <<" : ";
    int a2{};
    std::cin >> a2;
    if (a2>a1)
        std::cout << n2 <<"(age "<<a2<<")"<< " is older than " <<n1<<"(age "<<a1<<")";
    else
        std::cout << n1 <<"(age "<<a1<<")"<< " is older than " <<n2<<"(age "<<a2<<")";

    return 0;
}
