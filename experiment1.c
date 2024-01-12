// wap to find the addition, subtraction, quotient and remainder using 2 numbers as input given by user
#include <stdio.h>
#include <stdbool.h>

int main()
{
    // int num1, num2;

    // printf("Enter the first number: ");
    // scanf("%d", &num1);

    // printf("Enter the second number: ");
    // scanf("%d", &num2);

    // int sum = num1 + num2;
    // // double multi = num1 * num2;
    // int quo = num1 / num2;
    // int sub = num1 - num2;
    // int rem = num1 % num2;

    // printf("The sum is %d\n", sum);
    // // printf("The multi is %lf\n", multi);
    // printf("The sub is %d\n", sub);
    // printf("The remainder is %d\n", rem);
    // printf("The quotient is %d\n", quo);

    // printf("\n\n\n");

    // printf("\naddition is: %d", num1 + num2);
    // printf("\nsubstraction is: %d", num1 - num2);
    // printf("\nmultiplication is: %d", num1 * num2);
    // printf("\ndivision is: %f", (float)num1 / (float)num2);
    // printf("\nremainder is: %d", num1 % num2);

    // printf("\n\n\n");

    // printf("\n%d==%d is true or false gives output 1 or 0: %d", num1, num2, num1 == num2);
    // printf("\n%d!=%d is true or false gives output 1 or 0:  %d", num1, num2, num1 != num2);
    // printf("\n%d>%d is true or false gives output 1 or 0:  %d", num1, num2, num1 > num2);
    // printf("\n%d<%d is true or false gives output 1 or 0: %d", num1, num2, num1 < num2);

    // printf("\n\n\nLogical operators babyyyyyy\n\n\n");

    // // int result = (num1 != num2) && (num1 > num2);
    // printf("\n%d!=%d && %d>%d is true or false gives output 1 or 0: %d", num1, num2, num1, num2, (num1 != num2) && (num1 > num2));

    // printf("\n\n\n");

    // printf("lEAPyear\n\n");
    // int year = 2000;

    // if (year % 4 == 0)
    // {
    //     if (year % 100 == 0 && year % 400 == 0)
    //     {
    //         printf("yes leap year");
    //     }
    //     else if (year % 100 != 0)
    //     {
    //         printf("yes leap year");
    //     }
    //     else
    //     {
    //         printf("not leap year");
    //     }
    // }
    // else
    // {
    //     printf("NOt leap year");
    // }

    // bool leap = (year % 4 == 0) ? ((year % 100 != 0) ? true : ((year % 100 == 0 && year % 400 == 0) ? true : false)) : false;
    // int x = (leap == true) ? printf("\nleap year") : printf("\nNot leap year");

    // int a, b, c, d;
    // a = (2, 3, 4); // due to parenthesis the right most will be assigned to a
    // b = 2, 3, 4;   // left most will be assigned
    // printf("%d\n", a);
    // printf("%d\n", b);
    // c = (a = 10, b = 20, c = 30, a + b + c);
    // d = a = 10, b = 20, c = 30, a + b + c;

    // printf("%d\n", c);
    // printf("%d\n", d);

    int num;
    printf("Enter a number");
    scanf("%d", &num);
    bool count = true;
    while (num > 1)
    {
        if (num % 2 != 0)
            count = false;
        num /= 2;
    }
    if (count == true)
        printf("power of 2");
    else
        printf("Not a power of 2");

    return 0;
}
