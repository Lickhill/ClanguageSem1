// Write a program to verify the difference between increment operator i++ and ++i.
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the value of a");
    scanf("%d", &a);
    b = a++;
    printf("%d", b); // a=1 b=1 a=2
    b = ++a;
    printf("\n%d", b); // a=2,a=3,b=3
    return 0;
}