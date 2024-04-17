#include <iostream> // Standard libary for input and output functions

/* User Inputs
    - std::cin (character input) - extracts the first word from user input
    - std::getline(std::cin, <variable>) - extract everything from user input
    - ('<<') - Insertion operator
    - ('>>') - Extraction operator
*/

int main() { // Program start

    std::cout << "What's your name?: "; // Asking name in console
    std::string name; // initializing an string variable 'name'
    std::getline(std::cin, name); // Assigning user input into the 'name' variable

    std::cout << "What's your age?: "; // Asking age in console
    int age; // Initializing an int variable 'age'
    std::cin >> age; // Assinging user input into the 'age' variable

    std::cout // Outputting name and age.
    << "Hello, " << name << '\n'
    << "Your age is " << age << " years old";


    return 0; // Program exit status: Success
}