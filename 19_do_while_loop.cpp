#include <iostream>

int main(){

    int number;

    // do while loop: do some block of code first,
    // then repeat it while some condition is true
    do{
        std::cout << "Enter a positive number #: ";
        std::cin >> number;
    }
    while(number < 0);

    std::cout << "The # is: " << number;


    return 0;
}