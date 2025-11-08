#include <iostream>
#include <vector>

typedef std::vector<std::pair<std::string, int>> pairlist_t;
// typedef std::string text_t;
typedef int number_t;


using text_t = std::string; // using = alternative to typedef (more powerful)


int main() {
    pairlist_t pairlist;
    text_t firstName = "Bro";
    number_t age = 30;
    
    std::cout << firstName << '\n';
    std::cout << age << '\n';

    return 0;
}

