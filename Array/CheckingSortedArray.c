#include <stdio.h>
int main()
{
    int num;
    int flag = 0;
    printf("Enter Array Size: ");
    scanf("%d", &num);
    int arr[num];
    printf("Enter Array Elements: ");

    for (int i = 0; i < num; i++){
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < num-1; i++){
        if (arr[i] > arr[i + 1]){
            flag++;
        }
    }
    if (flag == 0){
        printf("Array is Sorted Ascending.");
    }else{
        printf("Array is not Sorted.");
    }
    return 0;
}