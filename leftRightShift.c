// Write a program which implements the working of left shift and right shift operators.
#include <stdio.h>
int main()
{
    int a;
    printf("Enter the value of a ");
    scanf("%d", &a);
    int b;
    printf("\nEnter the position for a to be left shifted ");
    scanf("%d", &b);
    printf("\nthe left shift of %d to position %d is %d<<%d: %d", a, b, a, b, a << b);  // a*(pow(2,2))= 40*(pow(2,2))=160
    printf("\nthe right shift of %d to position %d is %d>>%d: %d", a, b, a, b, a >> b); // a/(pow(2,2))=40/(pow(2,2))=10
    return 0;
}