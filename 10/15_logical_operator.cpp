#include <iostream>

int main(){

    int temp;

    std::cout << "Enter the temperature in Celsius: ";
    std::cin >> temp;


    // and
    if(temp >= 0 && temp <= 30){
        std::cout << "The temperature is good" << "\n";
    }
    else{
        std::cout << "The temperature is bad" << "\n";
    }

    // or
    if(temp <= 0 || temp >= 30){
        std::cout << "The temperature is good" << "\n";
    }
    else{
        std::cout << "The temperature is bad" << "\n";
    }


    bool sunny = true;
    // not
    if(!sunny){ 
        std::cout << "It is not a sunny day" << "\n";
    }
    else{
        std::cout << "It is a sunny day" << "\n";
    }


    return 0;
}