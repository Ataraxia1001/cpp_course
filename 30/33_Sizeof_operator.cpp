#include <iostream>

int main()
{

    // sizeof() = determines the size (in bytes) of a variable, 
    // data type, class, objects, etc.

    std::string name = "Bro Code";
    std::string longername = "Longer string has same size.";
    double gpa = 2.5;
    char grade = 'A';
    bool student = true;
    char grades[] = {'A', 'B', 'C', 'D', 'F'};
    std::string students[] = {"Bro", "Code", "Hello", "World"};


    std::cout << sizeof(gpa) << " bytes\n";          // size of variable
    std::cout << sizeof(double) << " bytes\n";       // size of data type
    
    std::cout << sizeof(name) << " bytes\n";         // size of variable
    std::cout << sizeof(longername) << " bytes\n";        // size of variable
    std::cout << sizeof(std::string) << " bytes\n";  // size of data type
    
    std::cout << sizeof(grade) << " bytes\n";        // size of variable
    std::cout << sizeof(char) << " bytes\n";         // size of data type

    std::cout << sizeof(student) << " bytes\n";      // size of variable
    std::cout << sizeof(bool) << " bytes\n";         // size of data type
    
    std::cout << sizeof(grades) << " bytes\n";        // size of array
    std::cout << sizeof(grades)/sizeof(char) << " elements\n"; // number of elements in array



    return 0;
}