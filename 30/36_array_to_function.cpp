#include <iostream>

double getTotal(double prices[], int size);

int main()
{
    double prices[] = {49.99, 15.05, 75, 9.99};
    int size = sizeof(prices) / sizeof(prices[0]);
    double total = getTotal(prices, size);
    std::cout << "Total: " << total << std::endl;

    return 0;
}


double getTotal(double prices[], int size){
    double total = 0;

    for(int i = 0; i < size; i++){
        total += prices[i];
    }
    return total;
}



// wrong way to get size of array in function

// double getTotal(double prices[]){
//     double total = 0;

//     std::cout << sizeof(prices) << '\n'; // here function doesn't know the size of the array, prints 8 bytes (size of pointer)
//     std::cout << sizeof(prices[0]) << '\n'; // prints size of double (8 bytes)
//     for(int i = 0; i < sizeof(prices)/sizeof(prices[0]); i++){
//         total += prices[i];
//     }
//     return total;
// }