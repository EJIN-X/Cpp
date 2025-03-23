#include <iostream>

//struct
struct Adinfo
{
    int adwatched{};
    double adpercentage{};
    double avgearning{};
};

//fn that can input
Adinfo Insertinfo()
{
    // int adwatched{};
    // double adpercentage{};
    // double avgearning{};
    Adinfo adinfo{};
    std::cout << "How many ads were watched : "<<std::endl;
    std::cin>> adinfo.adwatched;
    std::cout << "What percentage of users clicked on an ad : "<<std::endl;
    std::cin>>adinfo.adpercentage;
    std::cout << "The average earnings per clicked ad : "<<std::endl;
    std::cin>>adinfo.avgearning;
    return adinfo;
}

void printinfo(const Adinfo& ad)
{
    double multi{ad.adpercentage*ad.adwatched*ad.avgearning};
    std::cout<<"How much you made in a day : "<<multi;
}

int main()
{
    printinfo(Insertinfo());
}