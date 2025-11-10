#include <iostream>

int main(){

    char op;
    double num1, num2, result;

    std::cout << "************** Calculator **************\n";

    std::cout << "Enter operator (+, -, *, /): ";
    std::cin >> op;
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    switch(op){
        case '+':
            result = num1 + num2;
            std::cout << num1 << " + " << num2 << " = " << result << "\n";
            break;
        case '-':
            result = num1 - num2;
            std::cout << num1 << " - " << num2 << " = " << result << "\n";
            break;
        case '*':
            result = num1 * num2;
            std::cout << num1 << " * " << num2 << " = " << result << "\n";
            break;
        case '/':
            if(num2 != 0){
                result = num1 / num2;
                std::cout << num1 << " / " << num2 << " = " << result << "\n";
            } else {
                std::cout << "Error: Division by zero is not allowed.\n";
            }
            break;
        default:
            std::cout << "Error: Invalid operator!\n";
    }


    std::cout << "***************************************\n";

    return 0;
}