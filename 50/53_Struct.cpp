#include <iostream>

struct student{
    std::string name;
    double gpa;
    bool enrolled;
}; // it is like creating a new data type


int main(){

    // struct = A structure that group related variables under one name
    //        variables can be of different data types(string, int, double, etc.)
    //        variables in a struct are called "members"
    //        members can be access with. "Class Member Access Operator"

    student student1;
    student1.name = "John";
    student1.gpa = 3.5;
    student1.enrolled = true;

    student student2;
    student2.name = "Alice";
    student2.gpa = 3.8;
    student2.enrolled = false;

    std::cout << student1.name << '\n';
    std::cout << student1.gpa << '\n';
    std::cout << student1.enrolled << '\n';

    std::cout << student2.name << '\n';
    std::cout << student2.gpa << '\n';
    std::cout << student2.enrolled << '\n';

    return 0;
}