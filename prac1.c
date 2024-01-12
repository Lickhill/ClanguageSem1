// wap to find the addition, subtraction, quotient and remainder using 2 numbers as input given by user
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    int sum = num1 + num2;
    // double multi = num1 * num2;
    int quo = num1 / num2;
    int sub = num1 - num2;
    int rem = num1 % num2;

    printf("The sum is %d\n", sum);
    // printf("The multi is %lf\n", multi);
    printf("The sub is %d\n", sub);
    printf("The remainder is %d\n", rem);
    printf("The quotient is %d\n", quo);

    printf("\n\n\n");

    printf("\naddition is: %d", num1 + num2);
    printf("\nsubstraction is: %d", num1 - num2);
    printf("\nmultiplication is: %d", num1 * num2);
    printf("\ndivision is: %f", (float)num1 / (float)num2);
    printf("\nremainder is: %d", num1 % num2);

    return 0;
}