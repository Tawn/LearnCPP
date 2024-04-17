#include <iostream> // Standard library for input and output

    /* Arithmetic Operations 
        - Addition: +, +=, ++
        - Subtraction: -, -=, --
        - Multiplication: *, *=
        - Division: /, /=
        - Modulo (Remainder): % 

        Precedence: 
            1. Parenthesis
            2. Multiplication & Division
            3. Addition & Subtraction
    */

int main() { // Start of the program

    // Addition
    int x = 1; // Initialize variable 'x' as int type.
    x++; // Increment x by 1.
    std::cout << x << '\n'; // x = 2

    // Subtraction
    x--; // Decrement x by 1
    std::cout << x << '\n'; // x = 1

    // Multiply
    x*=10;
    std::cout << x << '\n'; // x = 10

    // Division
    x = x / 2;
    std::cout << x << '\n'; // x = 5

    // Modulo 
    x%=2;
    std::cout << x; // x = 1

    return 0; // Program exit status: Success
}