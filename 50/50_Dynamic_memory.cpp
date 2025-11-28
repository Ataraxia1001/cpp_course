#include <iostream>


int main2();


int main(){

    // dynamic memory = Memory that is allocated after the program
    //                  is already compiled & running
    //                  Use the 'new' operator to allocate
    //                  memory in the heap rather than the stack

    //                  Useful when we don't know how much memory
    //                  we will need. Makes out promgras more flexible,
    //                  especially when accepting user input.

    int *pNum = NULL;

    pNum = new int;

    *pNum = 21;

    std::cout << "Address: " << pNum << '\n';
    std::cout << "Value: " << *pNum << '\n';

    delete pNum; // free the memory allocated in the heap

    main2();

    return 0;
}



int main2 () {

    char *pGrades = NULL;
    int size;

    std::cout << "How many grades do you have? ";
    std::cin >> size;

    pGrades = new char[size];

    for(int i = 0; i < size; i++){
        std::cout << "Enter grade #" << (i + 1) << ": ";
        std::cin >> pGrades[i];
    }

    for(int i = 0; i < size; i++){
        std::cout << "pGrade " << (i + 1) << ": " << pGrades[i] << '\n';
    }

    delete[] pGrades; // free the memory allocated in the heap

    return 0;
}