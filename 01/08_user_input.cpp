#include <iostream>

int main(){

    std::string name;
    int age;

    std::cout << "What is your age? ";
    std::cin >> age;

    std::cout << "What is your full name? ";
    // std::cin >> name;  no space is allowed in input
    std::getline(std::cin >> std::ws, name); // allows spaces in input
    // ws removes leading whitespace before getline


    std::cout << "Hello, " << name << "!\n";
    std::cout << "You are " << age << " years old.\n";

    return 0;
}