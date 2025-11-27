#include <iostream>

int main()
{
    // array = a data structure that can hold multiple values
    //         values are accessed by an index number
    //         kind of like a variable that holds multiple values

    std::string cars[] = {"BMW", "Audi", "Ford", "Honda"};

    cars [0] = "Mercedes";

    std::cout << cars[0] << '\n';
    std::cout << cars[1] << '\n';
    std::cout << cars[2] << '\n';
    std::cout << "****************\n";

    std::string cars2[3];  // declare first with size and then define

    cars2[0] = "Chevrolet";
    cars2[1] = "Mustang";
    cars2[2] = "Camry";
    std::cout << cars2[0] << '\n';
    std::cout << cars2[1] << '\n';
    std::cout << cars2[2] << '\n';
    std::cout << "****************\n";

    double prices[] = {99.99, 12.50, 75.25};
    std::cout << prices[0] << '\n';
    std::cout << prices[1] << '\n';
    std::cout << prices[2] << '\n';
    std::cout << "****************\n";

    return 0;
}