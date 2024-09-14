#include <iostream>

int main(){
    int a;
    int b;
    int c;
    int d;
    int e;

    std::cout << "Enter value for a: " << std::endl;
    std::cin >> a;

    std::cout << "Enter value for b: " << std::endl;
    std::cin >> b;

    std::cout << "Enter value for c: " << std::endl;
    std::cin >> c;

    std::cout << "Enter value for d: " << std::endl;
    std::cin >> d;

    std::cout << "Enter value for e: " << std::endl;
    std::cin >> e;

    //std::cout << "Sum of a + b + c + d + e = " << (a+b+c+d+e) << std::endl;
    std::cout << (a+b+c+d+e) << std::endl;

    return 0;
}