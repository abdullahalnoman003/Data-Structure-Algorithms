#include <stdio.h>

int BinarySearch(int arr[], int left, int right, int element) {
    if (left > right) {
        return -1; 
    }
    int mid = (left + right) / 2;
    if (arr[mid] == element) {
        return mid; 
    } else if (element > arr[mid]) {
        return BinarySearch(arr, mid + 1, right, element);
    } else {
        return BinarySearch(arr, left, mid - 1, element);
    }
}
int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int element, left = 0, right = (sizeof(arr) / sizeof(arr[0])) - 1; 
    printf("Enter element to find: ");
    scanf("%d", &element);
    int result = BinarySearch(arr, left, right, element);
    if (result != -1) {
        printf("Element Found!\n");
        printf("Index of the element is %d\n", result); 
    } else {
        printf("Element not found!\n");
    }
    return 0;
}
