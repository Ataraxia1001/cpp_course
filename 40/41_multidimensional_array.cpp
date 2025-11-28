#include <iostream>


int main(){

    std::string cars[][3] = {
        {"Mustang", "Camaro", "Challenger"},
        {"Civic", "Corolla", "Focus"},
        {"Ferrari", "Lamborghini", "McLaren"}
    };

    std::cout << cars[0][0] << "\n";
    std::cout << cars[0][1] << "\n"; 
    std::cout << cars[1][0] << "\n";
    std::cout << cars[1][1] << "\n";


    
    int rows = sizeof(cars) / sizeof(cars[0]);
    int columns = sizeof(cars[0]) / sizeof(cars[0][0]);

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            std::cout << cars[i][j] << " ";
        }
        std::cout << "\n";
    }



    return 0;
}