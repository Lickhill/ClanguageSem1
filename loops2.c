#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

void armstrong();
void fibo();
void rectangle_star_pattern();
void pyramid();
void jump_statement_lecture();
char ascii_of_integer_to_character(int number);

int main()
{
    // int number;
    // printf("Enter a number to be checked if it is an armstrong number");
    // scanf("%d", &number);

    // armstrong();
    // fibo();
    // rectangle_star_pattern();
    // pyramid();
    // jump_statement_lecture();

    printf("%c", ascii_of_integer_to_character(65));

    return 0;
}

void armstrong()
{
    for (int num = 0; num <= 500; num++)
    {
        int sum = 0;
        char ch[1000];

        itoa(num, ch, 10);
        int n = num;
        int size = strlen(ch);
        while (n > 0)
        {
            int d = n % 10;
            sum = sum + pow(d, size);
            n /= 10;
        }
        if (sum == num)
            printf("\narmstrong number %d", num);
    }
}

void fibo()
{

    int num;
    int a = 0, b = 1;
    int c;
    printf("Enter a numebr till where you need a fibo");
    scanf("%d", &num);
    printf("%d %d ", a, b);
    num -= 2;
    while (num > 0)
    {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
        num--;
    }

    // for (num = num - 2; num > 0; num--)
    // {
    //     c = a + b;
    //     printf("%d ", c);
    //     a = b;
    //     b = c;
    //     num--;
    // }

    // num -= 2;
    // do
    // {
    //     c = a + b;
    //     printf("%d ", c);
    //     a = b;
    //     b = c;
    //     num--;
    // } while (num > 0);
}

void rectangle_star_pattern()
{
    int n;
    printf("Enter the number");
    scanf("%d", &n);
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void pyramid()
{
    int n;
    printf("Enter the number");
    scanf("%d", &n);
    int j;
    for (int i = 1; i <= n; i++)
    {
        for (j = n - i; j >= 1; j--)
        {
            printf(" ");
        }
        for (int k = j; k < i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void jump_statement_lecture()
{
    for (int i = 0; i < 21; i++)
    {
        if (i == 10)
        {
            break; // prints till 9 then breaks out the entire for loop
        }
        printf("%d ", i);
    }
    printf("\n");
    for (int i = 0; i < 21; i++)
    {
        if (i == 10)
        {
            continue; // does not go to printf after this continue rather it goes to i++ then does the iteration for i=11 then prints from 11 till next satidfaction of the if block
        }
        printf("%d ", i);
    }
}

char ascii_of_integer_to_character(int number)
{
    return (char)number;
}
