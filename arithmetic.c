#include <stdio.h>

int main()
{
    int num2, sum, substract, multiply;

    float num1 = 12;
    num2 = 5;

    sum = num1 + num2;
    substract = num1 - num2;
    multiply = num1 * num2;
    float divide = num1 / num2;

    printf("The sum is : %d\n", sum);
    printf("The difference is : %d\n", substract);
    printf("The multiplication is : %d\n", multiply);
    printf("The division is : %.1f", divide);

    return 0;
}