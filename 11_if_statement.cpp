#include <iostream>


int main(){
    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if(age < 0){
        std::cout << "You haven't been born yet!\n";
    }
    else if(age >= 0 && age <= 12){
        std::cout << "You are a child.\n";
    }
    else if(age >= 13 && age <= 19){
        std::cout << "You are a teenager.\n";
    }
    else{
        std::cout << "You are an adult.\n";
    }

    return 0;
}