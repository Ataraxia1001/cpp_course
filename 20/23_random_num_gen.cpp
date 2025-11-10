#include <iostream>



int main()
{
    // pseudo-random = Not truly random (but close)

    srand(time(NULL)); // seed the random number generator with calendar time

    int num1 = (rand() % 6) + 1; // generate a random number >> take remainder of rand(). 1-6
    int num2 = (rand() % 6) + 1;
    int num3 = (rand() % 6) + 1;
    
    std::cout << num1 << "\n" ;
    std::cout << num2 << "\n" ;
    std::cout << num3 << "\n" ;

    return 0;
}