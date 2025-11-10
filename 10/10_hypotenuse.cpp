#include <iostream>
#include <cmath>

int main(){

    double a;
    double b;
    double c;

    std::cout << "Enter length of side a: ";
    std::cin >> a;

    std::cout << "Enter length of side b: ";
    std::cin >> b;

    c = std::sqrt(std::pow(a, 2) + std::pow(b, 2));

    std::cout << "The length of the hypotenuse c is: " << c << "\n";

    return 0;
}