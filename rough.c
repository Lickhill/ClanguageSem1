#include <stdio.h>
#include <stdlib.h>

void bubblesort(int *ptr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (*(ptr + j) > *(ptr + j + 1))
            {
                int temp = *(ptr + j);
                *(ptr + j) = *(ptr + j + 1);
                *(ptr + j + 1) = temp;
            }
        }
    }
}

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int *ptr = (int *)malloc(n * sizeof(int));

    printf("Enter the array elements:\n");
    for (int i = 0; i < n; i++)
    {
        printf("a[%d]: ", i);
        scanf("%d", ptr + i);
    }

    bubblesort(ptr, n);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(ptr + i));
    }

    free(ptr);

    return 0;
}

void bubblesort(int *ptr, int n)
{
    for (int *i = ptr; i < ptr - 1; i++)
    {
        for (int *j = ptr; j < ptr - i - 1; j++)
        {
            if (*(ptr + j) > *(ptr + j + 1))
            {
                int temp = *(ptr + j);
                *(ptr + j) = *(ptr + j + 1);
                *(ptr + j + 1) = temp;
            }
        }
    }
}
