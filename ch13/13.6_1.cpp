#include <iostream>
#include <string_view>

//enum for animals
enum class Animals
{
    pig,
    chicken,
    goat,
    cat,
    dog,
    duck,
};

//getanimalname std::string_view return name
constexpr std::string_view getAnimalName(Animals animal)
{
    switch (animal)
    {
    case Animals::pig: return "Pig";
    case Animals::chicken: return "Chicken";
    case Animals::goat: return "Goat";
    case Animals::cat: return "Cat";
    case Animals::dog: return "Dog";
    case Animals::duck: return "Duck";
        default: return "???";
    }
}


void printNumberOfLegs(Animals animal)
{
    switch (animal)
    {
    case Animals::pig:
        {
            std::cout <<"A "<<getAnimalName(animal)<<" has "<<"4 legs"<<std::endl;
            break;
        }
    case Animals::chicken:
        {
            std::cout <<"A "<<getAnimalName(animal)<<" has "<<"2 legs"<<std::endl;
            break;
        }
    case Animals::goat:
        {
            std::cout <<"A "<<getAnimalName(animal)<<" has "<<"4 legs"<<std::endl;
            break;
        }
    case Animals::cat:
        {
            std::cout <<"A "<<getAnimalName(animal)<<" has "<<"4 legs"<<std::endl;
            break;
        }
    case Animals::dog:
        {
            std::cout <<"A "<<getAnimalName(animal)<<" has "<<"4 legs"<<std::endl;
            break;
        }
    case Animals::duck:
        {
            std::cout <<"A "<<getAnimalName(animal)<<" has "<<"2 legs"<<std::endl;
            break;
        }
    default: std::cout << "???";
        break;
    }

}

int main()
{
    printNumberOfLegs(Animals::cat);
    printNumberOfLegs(Animals::chicken);
    return 0;
}