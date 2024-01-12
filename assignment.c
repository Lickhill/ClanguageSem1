#include <stdio.h>
int main()
{
    int num1 = 10, num2 = 20;

    int sum = num1 + num2;
    double multi = num1 * num2;
    int quo = num1 / num2;
    int sub = num1 - num2;
    int rem = num1 % num2;

    printf("\nand operator %d", num1 & num2);
    printf("\nor operator %d", num1 | num2);
    printf("\nnot operator %d", ~num1);
    printf("\nand operator %d", num1 ^ num2); // XOR
    printf("\nleft shift %d", num1 << 4);
    printf("\nright shift %d", num2 >> 4);

    printf("%d", num1++);
    printf("%d", ++num1);

    printf("%d\n", num1 < num2);
    printf("%d\n", num1 > num2);

    int x = 1;
    int y = 0;
    printf("%d\n", x && y); // 0
    printf("%d\n", x || y); // 1
    printf("%d\n", !y);     // not of y is 1
    printf("%d\n", !x);     // 0
    printf("%d\n", x > y);  // true so 1 is being printed

    // all are integer
    int gx;          // 2 - 4 bytes
    unsigned int yz; // 2 bytes
    long zx;         // 4 bytes
    unsigned long ab;
    short ad; // 2 bytes

    // all are float
    float br;       // 4 bytes and 6 decimel places
    double tc;      // 8 bytes and 15 decimel places
    long double dh; // 10 bytes and 19 decimel places

    char ch; // 1 byte

    printf("the size of integer is %d\n", sizeof(int));
    printf("the size of short is %d\n", sizeof(short));
    printf("the size of long is %d\n", sizeof(long));
    printf("the size of float is %d\n", sizeof(float));
    printf("the size of double is %d\n", sizeof(double));
    printf("the size of long double is %d\n", sizeof(long double));
    printf("the size of character is %d\n", sizeof(char));

    return 0;
}