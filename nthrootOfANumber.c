// wap to find nth root of a number
#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    int num;

    printf("Enter a number ");
    scanf("%d", &num);
    printf("Enter the value of n ");
    scanf("%d", &n);

    float ans = pow(num, (1.0 / n));
    printf("\nthe nth root of the entered number %d is:2 %f", num, ans);
    return 0;
}