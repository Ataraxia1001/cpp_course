#include <iostream>
#include <iomanip>
#include <limits>

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main()
{
    double balance = 0;
    int choice = 0;

    do{
        std::cout << "***********************\n";
        std::cout << "Enter your choice:\n";
        std::cout << "***********************\n";
        std::cout << "1. Show Balance\n";
        std::cout << "2. Deposit\n";
        std::cout << "3. Withdraw\n";
        std::cout << "4. Exit\n";
        std::cin >> choice;

        std::cin.clear(); // Clear any error flags
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input up to largest number of characters until newline


        switch(choice){
            case 1:
                showBalance(balance);
                break;
            case 2:
                balance += deposit();
                showBalance(balance);
                break;
            case 3:
                balance -= withdraw(balance);
                showBalance(balance);
                break;
            case 4:
                std::cout << "Exiting program.\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    }while(choice != 4);
    
    return 0;
}

void showBalance(double balance)
{
    std::cout << "Current Balance: $" << std::setprecision(2) << std::fixed << balance << "\n";
}

double deposit()
{   
    double amount = 0;
    std::cout << "Enter amount to deposit: $";
    std::cin >> amount;

    if(amount > 0){
        return amount;
    }
    else{
        std::cout << "That's not a valid amount: \n";
        return 0;
    }

    return amount;
}

double withdraw(double balance)
{   
    double amount = 0;

    std::cout << "Enter amount to withdraw: $";
    std::cin >> amount;
    if(amount > 0 && amount <= balance){
        return amount;
    }
    else if(amount > balance){
        std::cout << "Insufficient funds.\n";
        return 0;
    }
    else{
        std::cout << "That's not a valid amount: \n";
        return 0;
    }
}