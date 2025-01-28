#include <stdio.h>
void LinearSearch(int n, int arr[], int key){
    int found = 0;
for (int i = 0; i < n; i++) { 
        if (arr[i] == key) {
            printf("Element found at index: %d\n", i);
            found = 1;
            break;
        }
    }
    if (found==0) {
        printf("Element not found\n"); 
    }
}

int main() {
    int n, key ;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter value to search: "); 
    scanf("%d", &key);
    LinearSearch(n,arr,key);
    return 0;
}