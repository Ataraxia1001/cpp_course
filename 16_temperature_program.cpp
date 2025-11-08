#include <iostream>

int main(){

    double temp;
    char unit;

    std::cout << "********* Temperature Converter *********" << "\n";

    std::cout << "F = Fahrenheit" << "\n";
    std::cout << "C = Celsius" << "\n";
    std::cout << "What unit would you like to convert to: (F/C): ";
    std::cin >> unit;

    
    if(unit == 'F' || unit == 'f'){
        std::cout << "Enter the temperature in Celsius: ";
        std::cin >> temp;
        double fahrenheit = (temp * 9.0/5.0) + 32.0;
        std::cout << temp << " degrees Celsius is " << fahrenheit << " degrees Fahrenheit." << "\n";
    }
    else if(unit == 'C' || unit == 'c'){
        std::cout << "Enter the temperature in Fahrenheit: ";
        std::cin >> temp;
        double celsius = (temp - 32.0) * 5.0/9.0;
        std::cout << temp << " degrees Fahrenheit is " << celsius << " degrees Celsius." << "\n";
    }
    else{
        std::cout << "Invalid unit selected. Please choose either F or C." << "\n";
    }


    std::cout << " ***************************************** " << "\n";
}