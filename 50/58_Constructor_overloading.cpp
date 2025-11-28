#include <iostream>


class Pizza{
    public:
        std::string topping1;
        std::string topping2;

    Pizza(){

    }

    Pizza(std::string topping1){
        this->topping1 = topping1;
    }

    Pizza(std::string topping1, std::string topping2){
        this->topping1 = topping1;
        this->topping2 = topping2;
    }
};


int main() {
    

    // overloaded constructors = multiple constructors w/ same name but different parameters
    //                           allows for varying arguments when initializing an object

    Pizza pizza1("Pepperoni");
    Pizza pizza2("Mushrooms", "Green Peppers");
    Pizza pizza3; // calls default constructor

    std::cout << "Pizza 1 topping: " << pizza1.topping1 << std::endl;
    std::cout << "Pizza 2 toppings: " << pizza2.topping1 << ", " << pizza2.topping2 << std::endl;
    
    
    
    return 0;
}