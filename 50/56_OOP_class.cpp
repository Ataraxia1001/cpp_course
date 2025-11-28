#include <iostream>


class Human{
    public:  // access outside the class
        std::string name = "Rick"; // if I don't assign a value to name, it will be Rick by default
        std::string occupation = "Scientist";
        int age = 70;

        void eat(){
            std::cout << "This person is eating." << '\n';
        }
        void drink(){
            std::cout << "This person is drinking." << '\n';
        }
        void sleep(){
            std::cout << "This person is sleeping." << '\n';
        }
};


int main(){

    //  object = A collection of attributes and methods
    //           They can have characteristics and could perform actions
    //           Can be used to mimic real world items(ex. phone, book, ...)
    //           Created from a class which acts as a "blue-print"

    Human human1;
    Human human2;

    //human1.name = "John";
    human1.occupation = "Software Engineer";
    human1.age = 30;

    human2.name = "Jane";
    human2.occupation = "Doctor";
    human2.age = 28;

    std::cout << human1.name <<'\n';
    std::cout << human1.occupation <<'\n';
    std::cout << human1.age <<'\n';

    human1.eat();
    human1.drink(); 
    human1.sleep();

    human2.eat();
    human2.drink();
    human2.sleep();

    return 0;
}