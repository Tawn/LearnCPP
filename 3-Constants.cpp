#include <iostream> // Standard library for input and output functions.

/* const
    - (Constant): Variable value is constant.
    - Tells the compiler to prevent modification.
    - (read-only).
    
    Naming Convention: all uppercase.
*/

int main() { // Start of the program.
    const double PI = 3.14;
    int radius = 5;
    double circumference = 2 * PI * radius;
    std::cout << "Circumfrence: " << circumference;

    return 0; // Program exit status
}