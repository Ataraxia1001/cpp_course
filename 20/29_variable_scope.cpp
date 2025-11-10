#include <iostream>

int myNum_global = 5; // Global variable
int myNum = 20; // Global variable
void printNum();

int main()
{

    // Local variables = declared inside a function or block 
    // Global variables = declared outside all functions

    int myNum = 1;
    std::cout << "Local variable myNum: " << myNum << std::endl;

    printNum();

    return 0;
}

void  printNum() {
    // std::cout << myNum; local variable myNum is not accessible here
    std::cout << myNum_global << "\n"; // Accessing global variable

    int myNum = 10; // Local variable to printNum function
    std::cout << ::myNum; // Accessing global variable, instead of local
}