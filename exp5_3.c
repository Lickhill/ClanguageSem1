#include <stdio.h>
int main()
{
    int size1;
    int size2;

    printf("Enter the size of arrays\n");
    scanf("%d", &size1);
    scanf("%d", &size2);
    int arr1[size1][size1];
    int arr2[size2][size2];
    printf("Enter the array1 elements\n");
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size1; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Enter the array2 elements\n");
    for (int i = 0; i < size2; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    if (size1 != size2)
    {
        printf("operations, other than finding the transpose of the matrix, are not possible");
    }

    printf("Enter your choice\n");
    printf("1 for Addition\n2 for Sub\n3 for Multi\n4 for transpose of array 1\n5 for transpose of array 2\n");
    int ch;
    scanf("%d", &ch);
start:
    switch (ch)
    {
    case 1:
        for (int i = 0; i < size1; i++)
        {
            for (int j = 0; j < size2; j++)
            {
                printf("%d ", arr1[i][j] + arr2[i][j]);
            }
            printf("\n");
        }
        break;
    case 2:
        for (int i = 0; i < size1; i++)
        {
            for (int j = 0; j < size2; j++)
            {
                printf("%d ", arr1[i][j] - arr2[i][j]);
            }
            printf("\n");
        }
        break;
    case 3:
        for (int i = 0; i < size1; i++)
        {
            for (int j = 0; j < size2; j++)
            {
                printf("%d ", arr1[i][j] * arr2[i][j]);
            }
            printf("\n");
        }
        break;
    case 4:
        for (int i = 0; i < size1; i++)
        {
            for (int j = 0; j < size1; j++)
            {
                printf("%d ", arr1[j][i]);
            }
            printf("\n");
        }
        break;
    case 5:
        for (int i = 0; i < size2; i++)
        {
            for (int j = 0; j < size2; j++)
            {
                printf("%d ", arr2[j][i]);
            }
            printf("\n");
        }
        break;

    default:
        printf("Select any number from 1 to 5");
        goto start;
        break;
    }

    return 0;
}