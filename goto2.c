#include <stdio.h>
#include <math.h>
int main()
{

    int choice;
    int num;
start:
    printf("Enter 1 2 3 4 for finding even odd, positive negative, sqare, square root respectively");
    scanf("%d", &choice);
    printf("Enter a number");
    scanf("%d", &num);
    switch (choice)
    {
    case 1:
        if (num % 2 == 0)
        {
            printf("The num is even");
        }
        else
        {
            printf("The num is odd");
        }
        break;

    case 2:
        if (num < 0)
        {
            printf("The num is negative");
        }
        else
        {
            printf("The num is positive");
        }
        break;

    case 3:
        printf("The square is %d", num * num);
        break;

    case 4:
        printf("The square root is %lf", pow((double)num, (1.0 / 2.0)));
        break;
    default:
        printf("Invalid choice\n");
        goto start;
    }

    return 0;
}