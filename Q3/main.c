#include <stdio.h>


extern float subtraction(float, float);
extern float multiplication(float, float);
extern float sum(float, float);
extern float division(float, float);

int main()
{
    printf("subtraction(float, float) = %.2f\n", subtraction(1.5, 2.5));
    printf("multiplication(float, float) = %.2f\n", multiplication(1.5, 2.5));
    printf("sum(float, float) = %.2f\n", sum(1.5, 2.5));
    printf("division(float, float) = %.2f\n", division(1.5, 2.5));

    return 0;
}