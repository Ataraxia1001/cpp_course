#include <iostream>

int main(){

    int x = 3.14; // he decimal part is truncated
    double y = 3.14;
    double z = (int) 3.14; // conversion


    char k = 100;


    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << z << '\n';

    std::cout << k << '\n';

    std::cout << (char) 101 << '\n';


    // example usage
    int correct = 8;
    int questions = 10;
    double score = correct / (double) questions * 100; // (double) makes sure we get a decimal result
    std::cout << score << "%\n";

    return 0;
}