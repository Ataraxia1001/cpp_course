#include <iostream>
#include <ctime>

char getUserChoice();
char getComputerChoice();
void showChoices(char choice);
void chooseWinner(char player, char computer);


int main(){
    char player;
    char computer;

    player = getUserChoice();
    std::cout << "Player choice: ";
    showChoices(player);

    computer = getComputerChoice();
    std::cout << "Computer choice: ";
    showChoices(computer);

    chooseWinner(player, computer);

    return 0;
}


char getUserChoice() {
    char player;
    // std::cout << "Enter your choice (R for Rock, P for Paper, S for Scissors): ";
    do{
        std::cout << "Enter your choice (R for Rock, P for Paper, S for Scissors): ";
        std::cin >> player;
        std::cout << "You typed: " << player << std::endl;
    }while(player != 'R' && player != 'P' && player != 'S');
    
    return player;
}

char getComputerChoice() {
    srand(time(0));
    int randomNum = rand() % 3 + 1;
    switch(randomNum) {
        case 1: return 'R';
        case 2: return 'P';
        case 3: return 'S';
    }
    return 'R'; // Default case (should not reach here)
}

void showChoices(char choice) {
    switch(choice) {
        case 'R':
            std::cout << "Rock\n";
            break;
        case 'P':
            std::cout << "Paper\n";
            break;
        case 'S':
            std::cout << "Scissors\n";
            break;
        default:
            std::cout << "Invalid choice\n";
    }
}

void chooseWinner(char player, char computer) 
{
    switch(player){
        case 'R':
            if(computer == 'R'){
                std::cout << "It's a tie!\n";
            } else if(computer == 'P'){
                std::cout << "Computer wins! Paper covers Rock.\n";
            } else {
                std::cout << "Player wins! Rock crushes Scissors.\n";
            }
            break;
        case 'P':
            if(computer == 'P'){
                std::cout << "It's a tie!\n";
            } else if(computer == 'S'){
                std::cout << "Computer wins! Scissors cut Paper.\n";
            } else {
                std::cout << "Player wins! Paper covers Rock.\n";
            }
            break;
        case 'S':
            if(computer == 'S'){
                std::cout << "It's a tie!\n";
            } else if(computer == 'R'){
                std::cout << "Computer wins! Rock crushes Scissors.\n";
            } else {
                std::cout << "Player wins! Scissors cut Paper.\n";
            }
            break;
    }
}