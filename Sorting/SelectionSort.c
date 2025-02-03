#include <stdio.h>
int main()
{
    int size, i, j, temp, min;
    printf("Enter Array size:");
    scanf("%d", &size);
    int arr[size];
    printf("Enter Array Elements:");

    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Array Before Sorting:");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    for (i = 0; i < size - 1; i++)
    {
        min = i;
        for (j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
    printf("Array After Sorting:");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}