#include <iostream> // Standard library for input and output functions

/* Type Conversion 
    - Conversion of one type to another
    - Two Methods: 
        1. Implicit = automatic.
        2. Explicit = specify type to convert to
*/

int main () { // Start of a function 

    // Implicit
    double x = 3.14;
    int y = x; // implicit conversion from double to int
    std::cout << y << '\n'; // Output: 3

    // Explicit
    double pi = (int) x; // C-style cast
    std::cout << pi; // Output: 3

    return 0; // Program exit status: Success
}