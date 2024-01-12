#include <stdio.h>
int main()
{
    int num;
    int a = 0, b = 1;
    int c;
    printf("Enter a numebr till where you need a fibo");
    scanf("%d", &num);
    printf("%d %d ", a, b);
    num -= 2;
start:
    c = a + b;
    printf("%d ", c);
    a = b;
    b = c;
    num--;
    if (num > 0)
        goto start;

    return 0;
}
