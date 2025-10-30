#include <iostream>


namespace first{
    int x = 1;
}
namespace second{
    int x = 2;
}

int main(){

    // Namespace = provides a solution for preventing name conflicts in large projects
    //             Each entitiy needs a unique name.
    //             A namespace allows for identically named entities
    //             as long as the namespaces are different.

    using namespace first;

    // int x = 0;
    // int x = 1; // error: redefinition of 'x'

    std::cout << x << '\n';             // 1 because of "using namespace first;"
    std::cout << first::x << '\n';      // 1 first is not needed here
    std::cout << second::x << '\n';     // 2


    using std::string;
    using std::cout;
  
    string name = "Bro";  // omit std::
    cout << "Hello " << name << '\n';

    return 0;
}