#include <stdio.h>
int main()
{
    //     int num;
    //     scanf("%d", &num);
    //     int i = 2;
    // prime:
    //     if (num % i != 0)
    //         i++;
    //     if (i < num)
    //         goto prime;

    //     printf("%d", i);
    //     if (i == num)
    //     {
    //         printf("yes");
    //     }
    //     else
    //     {
    //         printf("no");
    //     }

    int num;
    scanf("%d", &num);
    int result = 1;
fact:
    result *= num;
    num--;
    if (num > 0)
        goto fact;

    printf("%d", result);

    //     int a = 10, b = 20;
    //     int temp;
    //     if (a > b)
    //     {
    //         goto swap; // when this lines comes, the program just jumps off, ignores the rest and goes to the goto name method
    //         printf("hellp");
    //     }
    //     if (a < b)
    //     {
    //         goto swap;
    //     }
    //     if (a != b)
    //     {
    //         goto swap;
    //     }
    // swap:
    //     temp = a;
    //     a = b;
    //     b = temp;

    //     printf("\n%d\n%d", a, b);
    // nigga:
    //     printf("\ndello");
    //     printf("\nello");
    //     printf("\nfello");
    //     printf("\ngello");

    //     printf("\nbello");

    //     int num;
    //     int i = 1;
    //     printf("Enter the number whose table you want to be diplayed");
    //     scanf("%d", &num);

    // table:
    //     printf("\n%d x %d = %d", num, i, num * i);
    //     i++;
    //     if (i <= 10)
    //         goto table;

    //     int max = (num > i) ? num : i;
    //     printf("\n%d", max);

    // int n1, n2, n3, n4, n5;
    // int max;
    // scanf("%d%d%d%d%d", &n1, &n2, &n3, &n4, &n5);
    // max = (n1 > n2) ? n1 : n2;
    // max = (max > n3) ? max : n3;
    // max = (max > n4) ? max : n4;
    // max = (max > n5) ? max : n5;

    // printf("%d", max);
    return 0;
}