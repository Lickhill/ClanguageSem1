#include <stdio.h>
int main()
{
    int dec;
    printf("Enter a dec number");
    scanf("%d", &dec);
    int num = dec;
    int i = 0;
    int bin = 0;
    while (num > 0)
    {
        bin = (num % 2) * (pow(10, i)) + bin;
        num /= 2;
        i++;
    }
    printf("%d", bin - 2);

    return 0;
}