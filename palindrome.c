#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    int n = num;
    int rev = 0;
    int d;
start:
    d = n % 10;
    rev = rev * 10 + d;
    n /= 10;
    if (n > 0)
        goto start;
    if (rev == num)
        printf("palindrome");
    else
        printf("not ");
    return 0;
}