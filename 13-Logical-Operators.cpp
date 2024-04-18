#include <iostream> // Standard library that contains I/O functions

/* Logical Opeators
    - And ('&&'): TRUE if both conditions (operands) are TRUE.
    - Or ('||'): TRUE if at least one condition is TRUE.
    - Not ('!'): TRUE if condition is FALSE.
    - False, otherwise. 

    - 0: FALSE
    - 1: TRUE
*/

int main() { // Program start
    std::cout 
    << "T && T:\t" << (true && true) << '\n'
    << "T && F:\t" << (true && false) << '\n'
    << "T || T:\t" << (true || true) << '\n'
    << "T || F:\t" << (true || false) << '\n'
    << "F || F:\t" << (false || false) << '\n'
    << "!T\t" << !(true) << '\n'
    << "!F\t" << !(false) << '\n';

    // Logical conditions must be true for if and else-if statements to execute code within.
    int x = 10;

    // Example #1
    if (x > 5 && x % 2 == 0) {
        std::cout << x << " is greater than 5 and is an even number.\n";
    }

    // Example #2
    if (x > 20 || x % 2 == 0) {
        std::cout << x << " is either greater than 20 or is an even number.\n";
    }

    // Example #3
    if (x > 20) {
        std::cout << "This will not get printed, because x is not greater than 20.";
    } 
    else {
        std::cout << x << " is not greater than 20.\n";
    }

    // Example #4
    bool hungry = true;
    if(!hungry) { // If not hungry
        std::cout << "I will not eat."; // This won't execute if hungry.
    }
    else {
        std::cout << "I will eat.\n";
    }

    return 0; // Program exit status: Success
}