#include <iostream> // Standard library that contains I/O functions
#include <cmath> // Library with many useful math calculating functions

namespace hypotenuse {
    // Formula: a^2 + b^2 = c^2
    double calculate(double a, double b) {
        double result = pow(a, 2) + pow(b, 2);
        double c = sqrt(result);
        return c;
    }
}

int main() { // Start of the program
    std::cout << hypotenuse::calculate(5, 5) << '\n';

    return 0; // Program exit status: Success
}