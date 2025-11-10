#include <iostream>

void bakePizza();
void bakePizza(std::string topping1);
void bakePizza(std::string topping1, std::string topping2);

int main()
{
    bakePizza();
    bakePizza("pepperoni");
    bakePizza("mushrooms", "green peppers");

    return 0;
}


void bakePizza(){
    std::cout << "Baking your pizza.\n";
}

void bakePizza(std::string topping1){
    std::cout << "Baking your pizza with " << topping1 << ".\n";
}

void bakePizza(std::string topping1, std::string topping2){
    std::cout << "Baking your pizza with " << topping1 << " and " << topping2 << ".\n";
}
