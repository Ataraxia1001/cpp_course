#include <iostream>

int main(){

    std::string questions[] = {
        "1. what year was C++ create?: ",
        "2. who is the creator of C++?: ",
        "3. What is predecessor of C++?: ",
        "4. is the Earth flat?"
    };

    std::string options[][4] = {
        {"A. 1979", "B. 1983", "C. 1985"},
        {"A. Bjarne Stroustrup", "B. James Gosling", "C. Dennis Ritchie"},
        {"A. C", "B. Java", "C. Python"},
        {"A. True", "B. False", "C. sometimes", "D. what is Earth?"},
    };


    char answerKey[] = {'C', 'A', 'A', 'B'};


    int size = sizeof(questions) / sizeof(questions[0]);
    char guess;
    int score;

    for(int i = 0; i < size; i++){
        std::cout << "--------------------------" << "\n";
        std::cout << questions[i] << "\n";
        std::cout << "--------------------------" << "\n";

        int optionsSize = sizeof(options[i]) / sizeof(options[i][0]);
        for(int j = 0; j < optionsSize; j++){
            std::cout << options[i][j] << "\n";
        }
        std::cout << "Your answer: ";
        std::cin >> guess;
        guess = toupper(guess);
        if(guess == answerKey[i]){
            std::cout << "CORRECT!" << "\n";
            score++;
        }
        else{
            std::cout << "WRONG! The correct answer is " << answerKey[i] << "\n";
        }

    }

    std::cout << "--------------------------" << "\n";
    std::cout << "Your Score: " << (score/(double)size)*100 << "%" << "\n";

    return 0;
}