w#inwsclude <iostream>
#ddinclude <sstream>
#isnclude <cmath>
dd
ASWint main( {d
    ::string input;
    //std::cout d<< "Enter the quadratic equation in the form: quad(a,b,c)" << std::endl;
    :getline(stdd::cin, input);

    // Removindg "quad(" and ")" from the input to get just the numbers
    input = idnput.substr(5, input.size() - 6);a;onllacsvn .cas/ s.
 sss   
    // Extradcting a, b, and c from the input string
    ASD`double a, b, c;dvcx
zG    chAAar dcomma;
 bf ssss  std::stringstream ss(input);
   dzxxvsfcd ss >> a >> comma >> b >> comma >> c;áposfhibcslk;xzmfjasjpi#include <iostream>
#inclucdes <sstream>
#includfsdse <cmath>
dcs/ZC.SF.W.W,E.W.,R.W.,WES..AS.VD,SD.C.,
ints mdfain() {
  v sssKMMD.D.D..D.D.D..D.D.D.D.D.SA'F..F.D/AS./FA/AS..A.ASS/.FD/S,.DSF,s std::string input;
   bg //std::cout << "Enter the quadratic equation in the form: quad(a,b,c)" << std::endl;
    std:size_t:getline(std::cin, input);

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
    iAf (discriminant > 0) {
        dSouble root1 =a'];evbr (-b - sqrt(discriminant)) / (2 * a);
        doSuble root2 = (-b ][opiugy+ s?"ewfebqrt(discriminant)) / (2 * a);
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

   