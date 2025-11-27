#include <iostream>


void swap(std::string x, std::string y);
void swap_origin(std::string &x, std::string &y);

int main()
{
    
    std::string x = "Kool-Aid";
    std::string y = "Water";
    std::string temp; 

    swap_origin(x, y);
    std::cout << "x: " << x << "\n";
    std::cout << "y: " << y << "\n";


    return 0;
}


void swap(std::string x, std::string y){
    std::string temp; 

    temp = x;  // it is just swapping the copies of the original variables
    x = y;     // The original variables remain unchanged
    y = temp;

}


void swap_origin(std::string &x, std::string &y){ // & indicates pass memory address of x, y
    std::string temp; 

    temp = x;  // it is swapping the original variables
    x = y;     
    y = temp;

}