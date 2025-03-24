#include <iostream>
#include <string>

struct Monster
{
    std::string type{};
    std::string name{};
    int health{};
};

void printMonster(const Monster& monster)
{
    std::cout <<"This "<<monster.type<<" is named "<<monster.name<<" and has "<<monster.health<<".\n";
}

int main()
{
    Monster ogre{"Ogre","Torg",145};
    Monster slime{"Slime", "Blurp", 23};
    printMonster(ogre);
    printMonster(slime);

    return 0;
}