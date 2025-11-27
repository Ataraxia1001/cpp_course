#include <iostream>


int main()
{
    std::string students[] = {"Alice", "Bob", "Charlie", "Diana"};
    char grades[] = {'A', 'B', 'C', 'D', 'F'};

    for(int i = 0; i < sizeof(students)/sizeof(std::string); i++){
        std::cout << students[i] << '\n';
    }


    for(int i = 0; i < sizeof(grades)/sizeof(char); i++){
        std::cout << grades[i] << '\n';
    }


    return 0;
}