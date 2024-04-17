#include <iostream> // Standard library for input and output functions

int main() { // Start of the program
    int age = 10; // Whole numbers
    double pi = 3.14; // Decimal numbers
    char grade = 'A'; // Single character
    bool isStudent = false; // True (1) or false (0)
    std::string name = "Tawn"; // Sequence of characters.

    std::cout << "Age: " << age << '\n' // Input data to the character output (cout) function from the standard library (std) of iostream.
    << "PI: " << pi << '\n'
    << "Grade: " << grade << '\n'
    << "Is a Student: " << isStudent << '\n'
    << "Name: " << name;

    return 0; // Program exit status: success
}