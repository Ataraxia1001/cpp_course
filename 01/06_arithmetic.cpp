#include <iostream>


int main(){

    int students = 20;

    students = students + 1;
    students += 1;
    students++; // add 1

    students = students - 1;
    students -= 1;
    students--; // subtract 1

    students = students * 2;
    students *= 2;

    
    students = students / 2;
    students /= 2;

    int remainder = students % 2;

    int value = 6 - (5 + 4) * 3 / 2;

    std::cout << remainder << '\n';
    std::cout << students << '\n';
    std::cout << value << '\n';
    
    return 0;

}