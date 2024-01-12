#include <stdio.h>
int main()
{
    int num;
start:
    printf("\nEnter the nuber of the days of the week");
    scanf("%d", &num);
    switch (num)
    {
    case 1:
        printf("MONDAY");
        break;
    case 2:
        printf("TUESDAY");
        break;
    case 3:
        printf("WEDNESDAY");
        break;
    case 4:
        printf("THURSDAY");
        break;
    case 5:
        printf("FRIDAY");
        break;
    case 6:
        printf("SATURDAY");
        break;
    case 7:
        printf("SUNDAY");
        break;

    default:
        printf("INVALID CHOICE OF NUMBER type again");
        goto start;
        break;
    }
    return 0;
}