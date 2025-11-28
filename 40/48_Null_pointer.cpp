#include <iostream>


int main(){

    // Null value = a special value that means something has no value.
    //              When a pointer is holding a null value,
    //              that pointer is not pointing at anything (null pointer)

    // nullptr = keyword reperesents a null pointer literal

    // nullptr are helpful when determining if an address
    // was successfully assigned to a pointer

    // When using pointers, be careful that your code isn't
    // dereferencing nullptr or pointing to free memory
    // this will cause undefined behavior


    int *pointer = nullptr; // pointer is not pointing to anything
    int x = 123;

    pointer = &x; // pointer is now pointing to x

    if (pointer == nullptr){
        std::cout << "address was not assigned" << std::endl;
    }
    else{
        std::cout << "address was assigned!" << std::endl;
        std::cout << "value of x is: " << *pointer << std::endl;
    }


    return 0;
}