#include <stdio.h>
int main()
{
    int number;
    int sum = 0;
    printf("Enter a number to be checked if it is an armstrong number");
    scanf("%d", &number);
    int n = number;
    int count = 0;
    while (n > 0)
    {
        int d = n % 10;
        n /= 10;
        count++;
    }
    n = number;
    while (n > 0)
    {
        int d = n % 10;
        sum = sum + pow(d, count);
        n /= 10;
    }

    if (sum == number)
        printf("The number is an armstrong number");
    else
        printf("The numebr is not an armstrong number");

    for (int i = 1; i < number; i++)
    {
        if (number % i == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == number)
        printf("The number is an perfect number");
    else
        printf("The numebr is not an perfect number");

    int count = 0;
    for (int j = 2; j < number; j++)
    {
        if (number % j == 0)
        {
            count++;
        }
    }
    if (count == 0)
    {
        printf("yes %d prime\n", number);
    }
    else
    {
        printf("not %d prime\n", number);
    }
}