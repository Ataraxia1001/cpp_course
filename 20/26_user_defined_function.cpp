#include <iostream>

void happyBirthday(std::string name, int age); // function declaration (define after main func)


int main()
{

    std::string name = "Alice";
    int age = 21;

    // function = a block of reusable code
    happyBirthday(name, age); // function call

    return 0;
}


void happyBirthday(std::string name, int age)
{
    std::cout << "Happy Birthday to " << name << '\n';
    std::cout << "Happy Birthday to You!\n\n";
    std::cout << "You are now " << age << " years old!\n";
}