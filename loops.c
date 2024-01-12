#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int sum = 0;
    int count = 0;
    for (int i = 1; i <= 300; i++)
    {
        if (i % 7 == 0 && i % 2 != 0)
        {
            sum += i;
            count++;
        }
    }
    double avg = (double)sum / (double)count;

    printf("The sum is %d", sum);
    printf("\nThe avg is %lf", avg);

    //***************************************************************************************************************************

    // char ch;
    // printf("Enter a character");
    // scanf("%c", &ch);
    // printf("\nASCII of %c is %d", ch, (int)ch);

    //***************************************************************************************************************************

    for (int i = 32; i <= 128; i++)
    {
        printf("\nThe ASCII of %c is %d", (char)i, i);
    }

    //***************************************************************************************************************************

    // int number;
    // int sum = 0;
    // printf("Enter a number to be checked if it is an armstrong number");
    // scanf("%d", &number);
    // int n = number;
    // int count = 0;
    // while (n > 0)
    // {
    //     int d = n % 10;
    //     n /= 10;
    //     count++;
    // }
    // n = number;
    // while (n > 0)
    // {
    //     int d = n % 10;
    //     sum = sum + pow(d, count);
    //     n /= 10;
    // }

    // if (sum == number)
    //     printf("The number is an armstrong number");
    // else
    //     printf("The numebr is not an armstrong number");

    //***************************************************************************************************************************

    // int number;
    // int sum = 0;
    // printf("Enter a number to be checked if it is an armstrong number");
    // scanf("%d", &number);
    // char ch[1000];

    // itoa(number, ch, 10);
    // int n = number;
    // int size = strlen(ch);
    // while (n > 0)
    // {
    //     int d = n % 10;
    //     sum = sum + pow(d, size);
    //     n /= 10;
    // }
    // if (sum == number)
    //     printf("The number is an armstrong number");
    // else
    //     printf("The numebr is not an armstrong number");

    //***************************************************************************************************************************

    // int number;
    // int sum = 0;
    // printf("Enter a number to be checked if it is an perfect number");
    // scanf("%d", &number);
    // for (int i = 1; i < number; i++)
    // {
    //     if (number % i == 0)
    //     {
    //         sum = sum + i;
    //     }
    // }
    // if (sum == number)
    //     printf("The number is an perfect number");
    // else
    //     printf("The numebr is not an perfect number");
}