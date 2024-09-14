#include <fstream> 
#include <iostream> 
#include <string> 
#include <sstream>

int main() {
    std::ifstream inputFile("input.txt");
    if (!inputFile.is_open()) {
        std::cerr << "Error opening file" << std::endl;
        return 1;
    }

    std::string line;
    double sum = 0;

    while (std::getline(inputFile, line)) {
        std::stringstream ss(line);
        double number;
        while (ss >> number) {
            sum += number;
        }
    }

    std::cout << sum << std::endl;

    inputFile.close();
    return 0;
}