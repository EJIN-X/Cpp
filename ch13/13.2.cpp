#include <iostream>
// enum Color
// {
//     red,
//     green,
//     blue,
// };
// enum Pet
// {
//     cat,
//     dog,
//     pig,
//     whale,
// };
//
// int main()
// {
//     Pet myPet{cat};
//
//
// }

// #include <bitset>
// #include <iostream>
//
// namespace Flags
// {
//     enum State
//     {
//         isHungry,
//         isSad,
//         isMad,
//         isHappy,
//         isLaughing,
//         isAsleep,
//         isDead,
//         isCrying,
//     };
// }
//
// int main()
// {
//     std::bitset<8> me{};
//     me.set(Flags::isHappy);
//     me.set(Flags::isLaughing);
//
//     std::cout <<std::boolalpha;
//
//     std::cout <<"I am happy ? "<< me.test(Flags::isHappy)<<std::endl;
//     std::cout <<"I am laughing ? "<<me.test(Flags::isLaughing)<<std::endl;
//     return 0;
// }

#include <iostream>

// enum Color
// {
//     red,
//     green,
//     blue,
// };
//
// int main()
// {
//     Color shirt{ blue };
//
//     if (shirt == blue) // if the shirt is blue
//         std::cout << "Your shirt is blue!";
//     else
//         std::cout << "Your shirt is not blue!";
//
//     return 0;
// }
namespace Monster
{
    enum MonsterType
    {
        orc,
        goblin,
        troll,
        ogre,
        skeleton,
    };
}


int main()
{
    [[maybe_unused]]Monster::MonsterType monster{Monster::troll};
}