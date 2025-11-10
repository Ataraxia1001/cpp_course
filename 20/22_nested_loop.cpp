#include <iostream>


int main()
{
    // Nested loops = a loop inside another loop
    // outer loop = loop that contains the inner loop
    // inner loop = loop inside another loop

    for (int i = 1; i <= 3; i++) // outer loop
    {
        std::cout << "Outer Loop Iteration: " << i << "\n";

        for (int j = 1; j <= 5; j++) // inner loop
        {
            std::cout << "  Inner Loop Iteration: " << j << "\n";
        }
    }

    std::cout << "NESTED LOOPS ENDED!\n";

    return 0;
}