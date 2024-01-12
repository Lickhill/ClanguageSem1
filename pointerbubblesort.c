#include <stdio.h>
#include <stdlib.h>
void bubblesort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
int main()
{
    int arr[] = {3, 2, 5, 3, 6, 4, 7, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubblesort(arr, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
