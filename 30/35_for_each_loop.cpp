#include <iostream>


int main()
{

    // foreach loop = loop that eases the traversal over an
    //                 iterable data set

    std::string students[] = {"Alice", "Bob", "Charlie", "Diana"};      
    int grades[] = {65, 70, 75, 80, 85};


    for(int i = 0; i < sizeof(students)/sizeof(std::string); i++){
        std::cout << students[i] << '\n';
    }


    // foreach loop. convenient, but less control
    for(std::string student : students){
        std::cout << student << '\n';
    }

    for(int grade : grades){
        std::cout << grade << '\n';
    }


    return 0;
}