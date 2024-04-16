#include <iostream> 
/* 'iostream' Standard library header
    - Included before compiling
    - Used for input and output (I/O) functionalities.
    - Every C++ program must have exactly one main function; it is mandatory for program execution.

    - Examples:
        std::cout << "Enter a number: "; // Output to console
        std::cin >> number; // Input from console 
 */ 

int main(){ 
/* The 'main' function: 
    - Starting Point for program execution 
    - return type: int - for reporting exit status.
    - function name 'main': indicates the start of the program.
    - parameters: can take arguments.
*/
    std::cout << "Hello World!"; 
    /* <standard library>::<character output> << <text>
        - ('<<') insertion operator: to feed data into the output.
        - printf is faster than iostream.
    */

    return 0; // Indicates that the program ended successfully.
}