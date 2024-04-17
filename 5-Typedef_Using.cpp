#include <iostream> // Standard library for input and output functions

/* typedef and using 
    - Type aliases
    - Both typedef and using are used for simplifying value-type names.
    - 'using' is more modern and better with templates than typedef.
    
    Naming convention: Adding suffix _t

*/

int main() { // Start of the program

    typedef std::string text_t; // text_t: Alias type for String type. 
    text_t name = "Tawn"; // Declaring variable 'name' as text_t (String) type.
    std::cout << "Name: " << name << '\n'; // Standard character output to console.

    using integer_t = int; // integer_t: Alias type for int type.
    integer_t age = 10; // Declaring variable 'age' as integer_t (int) type.
    std::cout << "Age: " << age;


    return 0; // Program exit status: Sucessful
}