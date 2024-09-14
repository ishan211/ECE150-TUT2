#include <iostream>
#include <sstream>
#include <cmath>

int main() {
    std::string input;
    //std::cout << "Enter the quadratic equation in the form: quad(a,b,c)" << std::endl;
    std::getline(std::cin, input);

    // Removing "quad(" and ")" from the input to get just the numbers
    input = input.substr(5, input.size() - 6);
    
    // Extracting a, b, and c from the input string
    double a, b, c;
    char comma;
    std::stringstream ss(input);
    ss >> a >> comma >> b >> comma >> c;

    std::cout << "\nf(x) = (" << a << "*x^2) + (" << b << "*x) + (" << c << ")\n";
    std::cout << "a = " << a << "\n";
    std::cout << "b = " << b << "\n";
    std::cout << "c = " << c << "\n";

    // Calculate the discriminant
    double discriminant = b * b - 4 * a * c;

    // Check the number of solutions based on the discriminant
    if (discriminant > 0) {
        double root1 = (-b - sqrt(discriminant)) / (2 * a);
        double root2 = (-b + sqrt(discriminant)) / (2 * a);
        std::cout << "\nIt has 2 roots\n";
        std::cout << "Root 1: x = " << root1 << "\n";
        std::cout << "Root 2: x = " << root2 << "\n";
    } else if (discriminant == 0) {
        double root = -b / (2 * a);
        std::cout << "\nIt has 1 root\n";
        std::cout << "Root: x = " << root << "\n";
    } else {
        std::cout << "\nIt has no real roots\n";
    }

    return 0;
}