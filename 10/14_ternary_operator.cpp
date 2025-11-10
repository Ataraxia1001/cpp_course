#include <iostream>


int main(){

    int grade = 75;

    // like an if-else statement
    grade >= 60 ? std::cout << "You passed!\n" : std::cout << "You failed!\n";


    bool hungry = true;
    hungry ? std::cout << "Time to eat!\n" : std::cout << "You are full!\n";
    std::cout << (hungry ? "Time to eat!\n" : "You are full!\n");

    return 0;
}