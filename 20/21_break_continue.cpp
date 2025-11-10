#include <iostream>


int main()
{
    // break = break out of a loop
    // continue = skip current iteration of a loop

    for (int i = 1; i <= 5; i++)
    {
        if (i == 3)
        {
            break; // exit the loop when i is 3
        }
        std::cout << i << "\n";
    }

    std::cout << "BREAK LOOP ENDED!\n";

    for (int i = 1; i <= 5; i++)
    {
        if (i == 3)
        {
            continue; // skip the current iteration when i is 3
        }
        std::cout << i << "\n";
    }

    std::cout << "CONTINUE LOOP ENDED!\n";

    return 0;
}