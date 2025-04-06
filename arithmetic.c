#include <stdio.h>

int main()
{
    int num1, num2, sum, substract, multiply, divide;

    num1 = 10;
    num2 = 20;

    sum = num1 + num2;
    substract = num1 - num2;
    multiply = num1 * num2;
    divide = num1 / num2;

    printf("The sum is : %d\n", sum);
    printf("The difference is : %d\n", substract);
    printf("The multiplication is : %d\n", multiply);
    printf("The division is : %d", divide);

    return 0;
}