#include <stdio.h>
int main()
{
    int size, i, j, temp;
    printf("Enter Array size:");
    scanf("%d", &size);
    int arr[size];
    printf("Enter Array Elements:");

    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Array Before Sorting: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("/n");

    for (i = 1; i < size; i++)
    {
        temp = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j+1]=temp;
    }

    printf("Array After Sorting: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}