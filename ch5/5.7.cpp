#include <string>
#include <iostream>

//std::string can store different lengths
// int main()
// {
//     std::string name{"Alex"};
//     name ="Jin";
//     std::cout << "My name is "<<name<<std::endl;
//     name ="Jack";
//     std::cout << "My name is "<<name<<std::endl;
//     name="name";
//     std::cout << "My name is "<<name<<std::endl;
//     return 0;
// }

// int main()
// {
//     std::cout <<"Enter your full name : ";
//     std::string name{};
//     std::cin >> name;
//
//     std::cout <<"Enter your favorite color : ";
//     std::string color{};
//     std::cin >> color;
//
//     std::cout << "Your name is " << name <<" and your favorite color is "<< color;
// }
//The outcome is Enter your full name : Jin Lee
// Enter your favorite color : Your name is Jin and your favorite color is Lee
//Better using the std::getline()
// int main()
// {
//     std::cout << "Enter your full name : ";
//     std::string name{};
//     std::getline(std::cin >> std::ws,name);
//     std::cout << "Enter your favorite color : ";
//     std::string color{};
//     std::getline(std::cin>>std::ws,color);
//     std::cout <<"Your name is "<< name << " and your favorite color is "<< color;
//     return 0;
// }

//output manipulator : std::setprecision() # at 4.8
//input manipulator : std::ws # ignore whitespace

// int main()
// {
//     std::cout <<"Pick 1 or 2 : ";
//     int choice{};
//     std::cin >> choice;
//
//     std::cout << "Now enter your name : ";
//     std::string name{};
//     std::getline(std::cin>>std::ws,name);
//     std::cout << "Hello, "<<name << ", you picked "<< choice;
//
//     return 0;
// }

/*If using std::getline() to read strings,
 *use std::cin >> std::ws input manipulator to ignore leading whitespace.
 *This needs to be done for each std::getline() call, as std::ws is not preserved across calls.*/

// int main()
// {
//     std::string name{"Jin"};
//     std::cout << name << " has " << name .length()<< "charcters";
//     return 0;
// }
//the .length() fn is a member fn nested in <string> so its not like length(name)
//!! Do not pass std::string by value

int main()
{
    using namespace std::string_literals;
    //easy access to the s suffix
    std::cout << "foo"<<std::endl;
    std::cout << "goo";
    return 0;
}

//!!constexpr std::string is not supported
