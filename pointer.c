#include <stdio.h>
int *print(int *xptr, int *yptr)

{
    int *large;

    large = *xptr > *yptr ? xptr : yptr;

    return large;
}
int main()
{
    int *pc, c;
    c = 22;
    printf("The value of c is %d\n", c);
    printf("The value of c is %x\n", &c);
    pc = &c;
    printf("The address of c is %d\n", pc);
    printf("The value of c is %d\n", c);
    printf("The value of c is %d\n", *pc);
    c = 11;
    printf("The value of c is %d\n", c);
    printf("The value of c is %d\n", *pc);
    printf("The address of c is %d\n", pc);
    *pc = 100;
    printf("The value of c is %d\n", c);

    printf("\n\n\n\n");

    int var = 789;
    // pointer for var
    int *ptr1;
    // double pointer for ptr1
    int **ptr2;

    ptr1 = &var;  // storing addresss of var in ptr1
    ptr2 = &ptr1; // storing address of ptr1 in ptr2

    printf("The value of var is:%d\n", var);
    printf("The value of var is:%d\n", *ptr1);
    printf("The value of var is:%d\n", **ptr2);

    printf("\n\n\n");

    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;
    printf("The array elements are\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *(ptr + i));
    }
    printf("\nThe array elements in reverse are\n");
    for (int i = 4; i >= 0; i--)
    {
        printf("%d ", *(ptr + i));
    }

    double value = 50;
    double *p;
    p = &value;
    printf("The addess of value is %d\n", p);
    p -= 1;
    printf("The addess of value after decrementing is %d\n", p);

    int number = 50;
    int *b;
    b = &number;
    printf("The addess of value is %d\n", b);
    b += 3;
    printf("The addess of value after increment is %d\n", b);

    printf("\n\n\n\n");

    int x, y, *result;

    printf("Enter the value of x and y :");

    scanf("%d %d", &x, &y);

    result = print(&x, &y);

    printf("The largest number is : %d and the adddress of that is %d", *result, result);

    return 0;
}