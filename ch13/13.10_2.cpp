#include <iostream>

//struct of fraction
struct Fraction
{
    int numerator{};
    int denominator{};
};

//read fraction
Fraction readFraction()
{
    Fraction fraction{};
    std::cout <<"Enter a value for the numerator: "<<std::endl;
    std::cin>> fraction.numerator;
    std::cout << "Enter a value for the denominator: "<<std::endl;
    std::cin>>fraction.denominator;
    return fraction;
}

//multi 2 fraction fn
Fraction calcFraction()
{
    Fraction num1{readFraction()};
    Fraction num2{readFraction()};
    Fraction multresult{};
    multresult.numerator=num1.numerator*num2.numerator;
    multresult.denominator=num1.denominator*num2.denominator;
    return multresult;

}

//print fraction
void printFraction(const Fraction& re)
{
    std::cout <<"Your fractions multiplied together: "<<re.numerator<<"/"<<re.denominator;
}

int main()
{
    printFraction(calcFraction());
    return 0;
}