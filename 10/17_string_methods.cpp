#include <iostream>

int main(){

    std::string name;
    std::cout << "Enter your full name: ";
    std::getline(std::cin, name);

    // count the number of characters of the string
    if(name.length() > 12){
        std::cout << "Your name is too long!" << "\n";
    }
    else{
        std::cout << "Your name is of average length." << "\n";
    }

    // check if the string is empty
    if(name.empty()){
        std::cout << "You did not enter a name!" << "\n";
    }
    else{
        std::cout << "Thank you for entering your name." << "\n";
    }

    // add string to the end
    name.append("@gmail.com");
    std::cout << "Your email is: " << name << "\n";

    std::cout << name.at(0) << "\n"; // print first character
    std::cout << name.at(name.length() - 1) << "\n"; // print last character

    name.insert(0, "$"); // insert character at the beginning
    std::cout << "Modified name: " << name << "\n";


    std::cout << name.find(' ') << "\n"; // find position of space character
    name.erase(0, 3); // remove first 3 characters
    name.erase(name.find(' '), 1); // remove space character
    std::cout << "Final name: " << name << "\n";

    return 0;
}