#include <iostream>

template <typename T, typename U>


// T max(T x, T y){   // accepts any data type, but only same data types T
//     return (x > y) ? x : y;
// }

auto max(T x, U y){   // accepts any data type
    return (x > y) ? x : y;
}


int main(){

    // function template = describes what a function looks like.
    //                     can be used to generate as many overloaded function
    //                     definitions as needed, each with different data types

    std::cout << max(3, 7) << '\n';          // int
    std::cout << max(3.5, 2.5) << '\n';      // double
    std::cout << max('G', 'E') << '\n';      // char

    std::cout << max(1, 2.3) << '\n';      // even mixed data types work by U
}