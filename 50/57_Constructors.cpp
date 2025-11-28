#include <iostream>


class Student{
    public:
        std::string name;
        int age;
        double gpa;

    Student(std::string name, int age, double gpa){ // constructor
        this->name = name;
        this->age = age;
        this->gpa = gpa;
    }
    // Student(std::string x, int y, double z){ // x, y, z are different one from in name, age, gpa
    //     name = x;
    //     age = y;
    //     gpa = z;
    // } 

};


int main(){

    // constructor = special method that is automatically called when an object is instantiated
    //               useful for assigning values to attributes as arguments

    Student student1("Jim", 19, 3.7); // assing values via constructor
    Student student2("Patrick", 21, 3.5);
    Student student3("Sara", 20, 3.9);

    std::cout << student3.name << '\n';
    std::cout << student3.age << '\n';
    std::cout << student3.gpa << '\n';

    return 0;
}