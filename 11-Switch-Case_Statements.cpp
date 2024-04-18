#include <iostream> // Standard library that contains I/O functions

/* Switch Statements
    - Alternative to using many else-if statements. 
    - For readability.

        switch(value){
            case value-1: 
                <action>
                break;
            case value-2:
                <action>
                break;
        }
*/

int main() { // Start of a program

    std::cout << "Please enter a month (1-12): "; // Ask user to enter a month
    int month; // Initialize variable
    std::cin >> month; // Get user input

    switch(month) {
        case 1: 
            std::cout << "January\n";
            break;
        case 2: 
            std::cout << "February\n";
            break;
        default: 
            std::cout << "Sorry, the rest hasn't been implemented.\n";
    }


    return 0; // Program exit status: Success
}