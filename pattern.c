#include <stdio.h>
void pattern(int n);
int main()
{
    pattern(5);
    return 0;
}

void pyramid(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void