#include <iostream>


void walk(int steps);
int factorial(int num);


int main() {

    // recursion = a programming technique where a function
    //             calls itself until it reaches a base case

    // advantages: less code and is cleaner
    //             useful for sorting and searching algorithms

    // disadvantages: uses more memory
    //                can be slower

    walk(5);     
    
    std::cout << factorial(5);

    return 0;
}


void walk(int steps){

    if(steps > 0){
        std::cout << "You take a step forward!" << '\n';
        walk(steps - 1);
    }

}

int factorial(int num){

    if(num <= 1){
        return 1;
    }
    else{
        return num * factorial(num - 1);
    }

}