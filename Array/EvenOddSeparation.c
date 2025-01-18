#include <stdio.h>

int main() {
    int n, evenCount = 0, oddCount = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n], even[n], odd[n];
    printf("Enter element: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) {
            even[evenCount++] = arr[i];
        } else {
            odd[oddCount++] = arr[i];
        }
    }
    printf("Even elements: ");
    for (int i = 0; i < evenCount; i++) {
        printf("%d ", even[i]);
    }
    printf("\n");
    printf("Odd elements: ");
    for (int i = 0; i < oddCount; i++) {
        printf("%d ", odd[i]);
    }
    printf("\n");
    return 0;
}
