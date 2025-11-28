#include <iostream>

struct Car{
    std::string model;
    int year;
    std::string color;
};


void printCar(Car car);
void printCar_original(Car &car);
void paintCar(Car &car, std::string newColor);


int main(){

    Car car1;
    Car car2;

    car1.model = "Toyota";
    car1.year = 2020;
    car1.color = "Red";

    car2.model = "Honda";
    car2.year = 2019;
    car2.color = "Blue";


    std::cout << &car1 << '\n';
    printCar(car1);
    printCar_original(car1);

    paintCar(car2, "Green");
    printCar(car2);
    printCar_original(car2);

    return 0;
}

void printCar(Car car){  // pass by value. copy of original struct
    std::cout << &car << '\n';

    std::cout << car.model << '\n';
    std::cout << car.year << '\n';
    std::cout << car.color << '\n';
}

void printCar_original(Car &car){ // pass by reference. original struct
    std::cout << &car << '\n';
    
    std::cout << car.model << '\n';
    std::cout << car.year << '\n';
    std::cout << car.color << '\n';
}

void paintCar(Car &car, std::string newColor){ // it must have &, otherwise it will not change the original struct
    car.color = newColor;
}