#include <iostream>

/* from: nm enigma -C
0000000000000000 T subtraction(float, float)
000000000000004e T multiplication(float, float)
000000000000001a T sum(float, float)
0000000000000034 T division(float, float)

*/

extern float subtraction(float, float);
extern float multiplication(float, float);
extern float sum(float, float);
extern float division(float, float);

int main()
{
    std::cout << "subtraction(float, float) = " << subtraction(1.5, 2.5) << std::endl;
    std::cout << "multiplication(float, float) = " << multiplication(1.5, 2.5) << std::endl;
    std::cout << "sum(float, float) = " << sum(1.5, 2.5) << std::endl;
    std::cout << "division(float, float) = " << division(1.5, 2.5) << std::endl;

    return 0;
}