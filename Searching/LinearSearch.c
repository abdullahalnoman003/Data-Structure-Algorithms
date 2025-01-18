// This is just a basic code of  Liner Searching Algorithm

#include <stdio.h>
int main() {
    int n, key, found = 0;
    printf("Enter number of elements: "); // Taking Array elements Inputs form user . You can initialize the array in the beginning of the code.
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter value to search: "); // Taking which element want to search.
    scanf("%d", &key);
    for (int i = 0; i < n; i++) { // Loop That will search through the array and check every element.
        if (arr[i] == key) {
            printf("Element found at position: %d\n", i + 1);
            found = 1;
            break;
        }
    }
    if (found==0) {
        printf("Element not found\n"); // Output shows if the searching element is not found
    }
    return 0;
}
