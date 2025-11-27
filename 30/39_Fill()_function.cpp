#include <iostream>

int main()
{
    // fill() = Fills a range of elements with a specified value
    //       syntax:  fill(begin, end, value)
    const int SIZE = 99;
    std::string foods[SIZE];

    fill(foods, foods + (SIZE/3), "Pizza");
    fill(foods + (SIZE/3), foods + (SIZE/3)*2, "Burger");
    fill(foods + (SIZE/3)*2, foods + SIZE, "Hotdog");

    for (std::string food : foods)
    {
        std::cout << food << "\n";
    }

    return 0;
}