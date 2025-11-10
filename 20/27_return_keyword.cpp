#include <iostream>


double square(double length);
double cube(double length);

std::string concatStrings(std::string str1, std::string str2);


int main()
{

    double length = 5.0;
    double area = square(length);
    double volume = cube(length);

    std::cout << "Area: " << area << "cm^2\n";
    std::cout << "Volume: " << volume << "cm^3\n";


    std::string firstName = "Ataka";
    std::string lastName = "Jeong";
    std::string fullName = concatStrings(firstName, lastName);
    std::cout << "Full Name: " << fullName << "\n";

    return 0;
}



double square(double length)
{
    double area = length * length;
    return area;
}

double cube(double length)
{
    double volume = length * length * length;
    return volume;
}

std::string concatStrings(std::string str1, std::string str2)
{
    return str1 + " " + str2;
}