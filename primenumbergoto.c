#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number");
    scanf("%d", &num);
    int i = 2;
prime:
    if (num % i != 0)
        i++;
    else
    {
        printf("no");
        exit(0);
    }
    if (i < num)
        goto prime;

    if (i == num)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }

    return 0;
}