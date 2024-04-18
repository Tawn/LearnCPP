#include <iostream> // Standard library that contains I/O functions

/* Ternary Operator
    - A.K.A. the "conditional operator"
    - Takes 3 operands ("ternary")
    - Shorthand for writing if-else statements

        <condition> ? <value/expression/action if true> : <value/expression/action if false; 
*/

int main() { // Start of the program

    // Example #1
    int a = 10; // Initialize variable a
    int b = 5; // Initialize variable b

    int max = (a > b) ? a : b; // Assign a to max if a is greater than b. Otherwise, assign b.

    std::cout << "The max value is: " << max << '\n';

    // Example #2
    int score = 55;
    std::string grade = (score > 60) ? "Pass" : "Fail";
    std::cout << "Class Result: " << grade << '\n'; 

    // Example #3
    (true) ? std::cout << "Condition was true\n" : std::cout << "This won't get printed.\n";
    
    // Example #4
    std::string result;
    (false) ? result = "This won't get assigned" : result = "Condition was false";
    std::cout << result << '\n';

    return 0; // Program exit status: Success
}