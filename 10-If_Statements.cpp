#include <iostream> // Standard library that contains I/O functions

/* If Statements
    - Do something if the statement is true then skip over the rest of the following else if/else statements.
    - Otherwise ignore visiting if/else if statement and go to the next if/else if/or else statement (if any). 

        if (<condition>) {}
        else if (<condition>) {}
        else {}
*/

int main() { // Start of the program
    std::cout // Ask user for age
    << "You must be over the age of 14 to enter this ride.\n"
    << "What is your age?: ";
    int age; // Initialize age variable
    std::cin >> age; // Get user input for age

    if (age > 14) { 
        std::cout << "Enjoy the ride!\n";
    }
    else if (age == 14) {
        std::cout << "Come back next year!\n";
    }
    else { 
        std::cout << "Sorry, you may not enter the ride.\n";
    }

    return 0; // Program exit status: Success
}