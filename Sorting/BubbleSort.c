// This Bubble sorting sorts elemnts in ascending order

#include <stdio.h>
int main()
{
    int size, i, j, temp;
    printf("Enter the size of the array: ");
    scanf(" %d", &size);
    int arr[size];
    printf("Enter the array elements: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]); // Storing array elements index wise
    }
    printf("Array Before Sorting: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]); // Printing array elements index wise
    }
    printf("\n");

    // Sorting Algorithm.

    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - 1; j++)
        {
            if (arr[j] > arr[j + 1]) // for decensing order just use "<"
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Array After Sorting Ascending: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]); // Printing array elements index wise
    }
    return 0;
}