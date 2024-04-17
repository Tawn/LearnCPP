#include <iostream> // Standard library 
#include <cmath> // Useful math function library

/* cmath 
    - Includes various predefined math functions.
    - Basic Arithmetic:
        - pow(x, y): Computes the power of x raised to y.
        - sqrt(x): Computes the square root of x.
        - cbrt(x): Computes the cube root of x.
    - And many others: 
        - Hyperbolic
        - Exponential & Logarithmetic 
        - Rounding & Remainders
        - Etc. 
*/

int main() { // Start of program
    double x, y, min, max, power; // Initializing variables
    x = 2;
    y = 3;
    min = std::min(x, y);
    max = std::max(x, y);
    power = pow(x, y);
    std::cout // Output results
    << "x: " << x << ", y: " << y << '\n'
    << "min(x, y): " << min << '\n'
    << "max(x, y)" << max << '\n'
    << "x^y: " << power << '\n';

    return 0; // Program exit status: Success
}