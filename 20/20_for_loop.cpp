#include <iostream>



int main ()
{
    for(int i = 1; i <= 5; i++)
    {
        std::cout << i << "\n";
    }

    std::cout << "FOR LOOP ENDED!\n";

    for(int i = 0; i <= 10; i+=2)
    {
        std::cout << i << "\n";
    }

    std::cout << "FOR LOOP ENDED!\n";


    for(int i = 10; i >= 5; i--)
    {
        std::cout << i << "\n";
    }

    std::cout << "FOR LOOP ENDED!\n";


    for(int i = 10; i >= 5; i-=2)
    {
        std::cout << i << "\n";
    }

    std::cout << "FOR LOOP ENDED!\n";

    return 0;
}