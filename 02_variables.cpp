#include <iostream>

int main(){

    int x; // declaration
    x = 5; // assignment

    // do it in one line
    int y = 6;
    int sum = x + y;
    int age = 21;

    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << sum << '\n';
    std::cout << age << '\n';

    // double (number including decimal)
    double price = 10.99;
    double gpa = 2.5;
    double temperature = 25.1;

    std::cout << price << '\n';
    std::cout << gpa << '\n';
    std::cout << temperature << '\n';


    // single chararcter
    char grade = 'A';
    char initial = 'B'; // incorrect, char can only hold a single character
    char currency = '$';

    std::cout << initial << '\n';

    // boolean (true or false)
    bool student = true;
    bool power = false;
    bool forSale = true;

    // string  (text, many characters)
    std::string name = "Bro";
    std::string day = "Friday";
    std::string food = "Pizza";
    std::string address = "123 Main St.";

    std::cout << name << '\n';
    std::cout << day << '\n';
    
    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old." << '\n';

    return 0;
}