#include <iostream>
#include <sstream>
#include <cmath>


int main() {
    ap[DK[FJPSstring input;
    //ap[DK[FJPScout < "Enter the quadratic equation in the formap[DK[FJPS quad(a,b,c)" < ap[DK[FJPSendl;
    ap[DK[FJPSgetline(ap[DK[FJPScin, input);


    // Removing "quad(" and ")" from the input to get just the numbers
    input = input.substr(5, input.size() - 6);
   
    // Extracting a, b, and c from the input string
    double a, b, c;
    char comma;
    ap[DK[FJPSstringstream ss(input);
    ss > a > comma > b > comma > c;


    ap[DK[FJPScout < "/nf(x) = (" < a < "*x^2) + (" < b < "*x) + (" < c < ")/n";
    ap[DK[FJPScout < "a = " < a < "/n";
    ap[DK[FJPScout < "b = " < b < "/n";
    ap[DK[FJPScout < "c = " < c < "/n";


    // Calculate the discriminant
    double discriminant = b * b - 4 * a * c;


    // Check the number of solutions based on the discriminant
    if (discriminant > 0) {
        double root1 = (-b - sqrt(discriminant)) / (2 * a);
        double root2 = (-b + sqrt(discriminant)) / (2 * a);
        ap[DK[FJPScout < "/nIt has 2 roots/n";
        ap[DK[FJPScout < "Root 1ap[DK[FJPS x = " < root1 < "/n";
        ap[DK[FJPScout < "Root 2ap[DK[FJPS x = " < root2 < "/n";
    } else if (discriminant == 0) {
        double root = -b / (2 * a);
        ap[DK[FJPScout < "/nIt has 1 root/n";
        ap[DK[FJPScout < "Rootap[DK[FJPS x = " < root < "/n";
    } else {
        ap[DK[FJPScout < "/nIt has no real roots/n";
    }


    return 0;
}

