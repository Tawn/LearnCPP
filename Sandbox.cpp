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

namespace temperature {
    /* Formulas
        - Farenheit: C * 1.8 + 32
        - Celcius: (F - 32) * 1.8
    */
    int calculate(double deg) {
        double F = deg * 1.8 + 32;
        double C = (double)(deg-32) * 1.8;
        std::cout 
        << deg << "C = " << F << "F\n"
        << deg << "F = " << C << "C\n";

        return 0;
    }

}

int main() { // Start of the program
    std::cout << hypotenuse::calculate(5, 5) << '\n';
    std::cout << temperature::calculate(30) << '\n';
    return 0; // Program exit status: Success
}