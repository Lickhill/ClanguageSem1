#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

void perfect_armstrong_prime_in_a_range();
void perfect();
void armstrong();
void prime();

int main()
{
    perfect_armstrong_prime_in_a_range();
    return 0;
}

void perfect_armstrong_prime_in_a_range()
{
    int n;
    printf("Enter a number to be checked if it is an armstrong/prime/perfect number or not.");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        armstrong(i);
        perfect(i);
        prime(i);
        printf("\n\n\n\n");
    }
}

void armstrong(int number)
{
    int sum = 0;
    char ch[1000];

    itoa(number, ch, 10);
    int n = number;
    int size = strlen(ch);
    while (n > 0)
    {
        int d = n % 10;
        sum = sum + pow(d, size);
        n /= 10;
    }
    if (sum == number)
        printf("The number  %d is an armstrong number\n", number);
    else
        printf("The numebr %d is not an armstrong number\n", number);
}

void perfect(int number)
{
    int sum = 0;
    for (int i = 1; i < number; i++)
    {
        if (number % i == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == number)
        printf("The number %d is an perfect number\n", number);
    else
        printf("The numebr %d is not an perfect number\n", number);
}

void prime(int number)
{
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
