#include <stdio.h>
int main()
{
    printf("ALL THE BITWISE OPERATOR EXAMPLES ARE:  \n");
    int a, b;
    printf("Enter two numbers\n");
    scanf("%d%d", &a, &b);
    printf("\nand operator %d", a & b);
    printf("\nor operator %d", a | b);
    printf("\nnot operator %d", ~a);
    printf("\nand operator %d", a ^ b); // XOR
    printf("\nleft shift %d", a << 4);
    printf("\nright shift %d", b >> 4);

    return 0;
}