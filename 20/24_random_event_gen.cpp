#include <iostream>
#include <ctime>

int main()
{

    srand(time(0)); // Seed the random number generator with the current time

    int randomEvent = rand() % 5 + 1; // Generate a random event (1, 2, or 3)

    switch (randomEvent)
    {
    case 1:
        std::cout << "Event: You found a treasure chest!" << std::endl;
        break;
    case 2:
        std::cout << "Event: A wild monster appears!" << std::endl;
        break;
    case 3:
        std::cout << "Event: You discovered a hidden passage!" << std::endl;
        break;
    case 4:
        std::cout << "Event: You met a friendly NPC!" << std::endl;
        break;  
    case 5:
        std::cout << "Event: You triggered a trap!" << std::endl;
        break;
    }

    return 0;
}