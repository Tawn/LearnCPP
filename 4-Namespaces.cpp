#include <iostream> // Standard library for input and output functions

/* namespace
    - (Namespaces): container to prevents name conflicts in large projects. 
    - Allows using same identifier as long as they're in different namespaces.
*/

namespace container1 {
    int x = 1;
}

namespace container2 {
    int x = 2;
}

int main() { // Start of the program
    using namespace container1; // uses x from container1 
    std::cout 
        << "container1: " << x << '\n'
        << "container2: " << container2::x << '\n';
    int x = 0;
    std::cout << "locally declared (main): " << x; // local variables overwrites outside variables.

    return 0; // Program exit status: Successful
}
