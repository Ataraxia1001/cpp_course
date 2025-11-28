#include <iostream>

class Animal{
    public:
        bool alive = true;
    void eat(){
        std::cout << "This animal is eating." << '\n';
    }
};


class Dog : public Animal{
    public:

    void bark(){
        std::cout << "Woof Woof!" << '\n';
    }
};


class Cat : public Animal{
    public:

    void meow(){
        std::cout << "Meow Meow!" << '\n';
    }
};



class Shape{
    public:
        double area;
        double volume;
};


class Cube : public Shape{
    public:
        double side;
        Cube(double side){
            this->side = side;
            this->area = 6 * side * side;
            this->volume = side * side * side;
        }
};


class Sphere : public Shape{
    public:
        double radius;
        Sphere(double radius){
            this->radius = radius;
            this->area = 4 * 3.141592 * radius * radius;
            this->volume = (4.0/3.0) * 3.141592 * (radius * radius * radius);
        }
};




int main(){

    // inheritance = A class can recieve attributes and methods from another class
    // base class = the class being inherited from (parent class)
    // children class: helps to reuse similar code found within multiple classes

    Dog dog;
    Cat cat;


    std::cout << "Is the dog alive? " << dog.alive << '\n';
    dog.eat();
    dog.bark();

    cat.eat();
    cat.meow();


    Cube cube(3.0);
    Sphere sphere(4.0);
    std::cout << "Cube area: " << cube.area << '\n';
    std::cout << "Cube volume: " << cube.volume << '\n';
    std::cout << "Sphere area: " << sphere.area << '\n';
    std::cout << "Sphere volume: " << sphere.volume << '\n';


    return 0;
}