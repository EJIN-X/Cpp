// #include <iostream>
// #include <string_view>
//
// enum Color
// {
//     black,
//     red,
//     blue,
// };
//
// constexpr std::string_view getColorName(Color color)
// {
//     switch (color)
//     {
//     case black: return "black";
//     case red: return "red";
//     case blue: return "blue";
//         default: return "???";
//     }
// }
//
// std::ostream& operator<<(std::ostream& out,Color color)
// {
//     out <<getColorName(color);
//     return out;
// }
//
// int main()
// {
//     Color shirt{ blue };
//     std::cout << "Your shirt is " << shirt << '\n'; // it works!
//
//     return 0;
// }

#include <iostream>
#include <limits>
#include <optional>
#include <string>
#include <string_view>

enum Pet
{
    cat,
    dog,
    pig,
    whale,
};

constexpr std::string_view getPetName(Pet pet)
{
    switch (pet)
    {
    case cat: return "cat";
    case dog: return "dog";
    case pig : return "pig";
    case whale : return "whale";
        default: return "???";
    }
}

constexpr  std::optional<Pet> getPetFromString(std::string_view sv)
{
    if (sv== "cat") return cat;
    if (sv== "dog") return dog;
    if (sv== "pig") return pig;
    if (sv== "whale") return whale;

    return {};

}

std::istream& operator >>(std::istream& in, Pet& pet)
{
    std::string s{};
    in>>s;
    std::optional<Pet> match{getPetFromString(s)};
    if (match)
    {
        pet=*match;
        return in;
    }
    in.setstate(std::ios_base::failbit);

    return in;
}

int main()
{
    std::cout << "enter a pet: cat, dog, pig, or whale: ";
    Pet pet{};
    std::cin >> pet;

    if (std::cin)
        std::cout << "You chose: "<<getPetName(pet)<<std::endl;
    else
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        std::cout<<"Your pet was not valid\n";
    }
    return 0;

}