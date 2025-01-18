#include <stdio.h>

int main() {
    int n, flag = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    int arr2[n];
    printf("Enter element: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        arr2[i]=arr[n-1-i];
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr2[i]);
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        if (arr[i]!=arr2[i])
        {
            flag=1;
        }
        
    }
    if (flag==0)
    {
        printf("The Array is Palindrome.");
    }else{
        printf("The Array is Not Palindrom.");
    }
    
    return 0;
}
