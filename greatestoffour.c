#include <stdio.h>
int main()
{
    int x, y, z, w;
    printf("Enter the value of x and y and z and w");
    scanf("%d%d%d%d", &x, &y, &z, &w);
    // if (x > y)
    // {
    //     if (x > z)
    //     {
    //         printf("X is the greatest");
    //     }
    //     else
    //     {
    //         printf("Z is the greatest");
    //     }
    // }
    // else if (y > z)
    // {
    //     printf("Y is the greatest");
    // }
    // else
    // {
    //     printf("Z is the greatest");
    // }

    printf("\nThe greatest number is ");

    int result = (x > y) ? (x > z) ? printf("X") : printf("Z") : (y > z) ? printf("Y")
                                                                         : printf("Z");

    printf("\nThe greatest number is ");
    int max1 = (x > y) ? x : y;
    int max2 = (z > w) ? z : w;
    int max3 = (max1 > max2) ? max1 : max2;
    printf("%d", max3);

    printf("\nThe greatest number is ");
    int result2 = (x > y) ? (x > z) ? ((x > w) ? x : w) : ((z > w) ? z : w) : (y > z) ? (y > w) ? y : w
                                                                          : (z > w)   ? z
                                                                                      : w;
    printf(" %d", result2);
    return 0;
}