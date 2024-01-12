#include <stdio.h>
int main()
{
    // float a;
    // printf("Enter the value of a ");
    // scanf("%f", &a);
    // printf("the value is %f", a);

    // int age;
    // int roll;
    // printf("Enter the data\n");
    // scanf("%d%d", &age, &roll);
    // printf("\nThe age is %d", age);
    // printf("\nThe roll number is %d", roll);

    // if (age >= 18)
    // {
    //     printf("\nyou can drive a car");
    // }
    // else
    //     printf("\nYou cannnot drive a car");

    // int age = 19;
    // unsigned int roll = -98;
    // printf("age is %d", age);
    // printf("roll is %u", roll);

    // char ch;
    // printf("Enter y/Y for yes and n/N for no \n");
    // ch = getchar(); // same as scanf("%c",%ch); but only for a single character pressed first in the keyboard, could be literally any sign or alphabet pressed in keyboard
    // //scanf("%c", &ch);
    // printf("the input was ");
    // putchar(ch); // same as printf("%c",ch);
    // //printf("%c", ch);

    // int x;
    // float y;
    // char z;

    // scanf("%d%f%c", &x, &y, &z);
    // printf("The int float and char is %d \n %f \n %c \n", x, y, z);
    // printf("\n");

    // scanf("%3d %4f", &x, &y);
    // printf("The int float and char is %3d\n%2.f\n", x, y);

    // scanf("%3d %4f", &x, &y);
    // printf("The int float and char is %3d\n%2.f\n", x, y);

    //*********************************************************************************************
    // //all are integer
    // int x;//2 - 4 bytes
    // unsigned int y;//2 bytes
    // long z;//4 bytes
    // short a;//2 bytes

    // //all are float
    // float b;//4 bytes and 6 decimel places
    // double c;//8 bytes and 15 decimel places
    // long double d;//10 bytes and 19 decimel places

    // char ch;//1 byte

    printf("the size of integer is %d\n", sizeof(signed int));
    printf("the size of short is %d\n", sizeof(short));
    printf("the size of long is %d\n", sizeof(long));
    printf("the size of float is %d\n", sizeof(float));
    printf("the size of double is %d\n", sizeof(double));
    printf("the size of long double is %d\n", sizeof(long double));
    printf("the size of character is %d\n", sizeof(char));
    printf("the size of long long int is %d\n", sizeof(long long int));

    //***********************************************************************************************************************

    // int a = 23;
    // int b = 34;
    // printf("%d\n", a > b);
    // printf("%d\n", a < b);

    // int x = 1;
    // int y = 0;
    // printf("%d\n", x && y); // 0
    // printf("%d\n", x || y); // 1
    // printf("%d\n", !y);     // not of y is 1
    // printf("%d\n", !x);     // 0

    return 0;
}