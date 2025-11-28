#include <iostream>

int main()
{
    // pointer = variable that stores the memory address of another variable
    //           sometimes it's easier to work with an address

    // & = "address of" operator
    // * = "value at address" operator

    std::string name = "Bro";
    int age = 21;
    std::string freePizzas[5] = {"pizza1", "pizza2", "pizza3", "pizza4", "pizza5"};

    std::string *pName = &name; // pointer to a string that holds the address of name
    int *pAge = &age;           // pointer to an int that holds the address of age
    std::string *pFreePizzas = freePizzas; // pointer to a string that holds the address of the freePizzas array


    std::cout << pName << '\n';        // prints the address of name
    std::cout << *pName << '\n';       // prints the value at the address (value of name)

    std::cout << pAge << '\n';         // prints the address of age
    std::cout << *pAge << '\n';        // prints the value at the address (value of age)
    std::cout << pFreePizzas << '\n';  // prints the address of the first element in freePizzas array
    std::cout << *pFreePizzas << '\n'; // prints the value at the address 

    std::cout << "iterate whole array\n";
    for (int i = 0; i < 5; i++) {
        std::cout << pFreePizzas[i] << '\n';
    }

    std::cout << "addresses of each element in array\n";
    for (int i = 0; i < 5; i++) {
        std::cout << &freePizzas[i] << '\n';
    }


}