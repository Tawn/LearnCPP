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
    << "Your age is " << age << " years old \n";

    /* Note: whitespaces will separate words for multiple inputs */
    std::cout << "Please input 2 words (separated by whitespaces): ";
    std::string word1, word2;
    std::cin >> word1;
    std::cin >> word2;

    std::cout << "Please insert multiple words (separated by whitespaces): ";
    std::string wordset;
    std::getline(std::cin >> std::ws, wordset);

    std::cout 
    << "word1: " << word1 << '\n'
    << "word2: " << word2 << '\n'
    << "wordset: " << wordset << '\n'; 
    /* Without std::ws in the previous std::getline function call, 
    this outputs blank because it took in the \n argument from last input and put into wordset */

    return 0; // Program exit status: Success
}