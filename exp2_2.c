#include <stdio.h>
#include <stdbool.h>
// void deleteElementInMatrix(int target, int arr[], int size);
// void printarray(int arr[], int size);
// void storeElementsInAnArray(int n);
// void storIn2D(int r, int c);
// void printarray2D(int brr[][4], int r, int c);
// void linearsearch(int arr[], int size, int target);
// void bubblesort(int arr[], int size);
// void binarysearch(int arr[], int size, int target);

void deleteElementInMatrix(int target, int arr[], int size)
{
    bool game = false;
    for (int i = 0; i < size; i++)
    {
        if (target == arr[i])
        {
            game = true;
        }
        if (game && i < (size - 1))
        {
            arr[i] = arr[i + 1];
        }
    }
    printarray(arr, size - 1);
}

void printarray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    return;
}

void storeElementsInAnArray(int n)
{
    int arr[n];
    printf("Enter the array elemets\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printarray(arr, n);
}

void storIn2D(int r, int c)
{
    int brr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter the value of arr[%d][%d]", i, j);
            scanf("%d", &brr[i][j]);
        }
    }
    printarray2D(brr, r, c);
}

void printarray2D(int brr[][4], int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", brr[i][j]);
        }
        printf("\n");
    }
    return;
}

void linearsearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            printf("found the target %d in position %d", target, i + 1);
            return;
        }
    }
}

void bubblesort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printarray(arr, size);
    binarysearch(arr, size, 7567);
}

void binarysearch(int arr[], int size, int target)
{
    // int arr[]={1,2,3,4,5,6,7,8,9};
    //-3456 -2 0 3 3 3 4 6 6 7 9 999
    int start = 0;
    int end = size - 1;
    bool game = true;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else if (arr[mid] == target)
        {
            printf("\n%d found in position %d", target, mid);
            game = false;
            return;
        }
    }
    if (game)
    {
        printf("\ntarget not fount");
    }
    return;
}

int main()
{
    int arr[] = {4, 3, 6, 6, 7, 3, 9, -2, 3, 0, 999, -3456};
    int size = sizeof(arr) / sizeof(arr[0]);

    // int a[9];
    // a = {1, 2, 3, 4, 5, 6, 7, 8, 8};
    // cannot declair first and then initialise values to an array

    // deleteElementInMatrix(4, arr, size);
    // storeElementsInAnArray(5);
    // storIn2D(3, 4);
    // linearsearch(arr, size, 6);
    bubblesort(arr, size);

    return 0;
}
