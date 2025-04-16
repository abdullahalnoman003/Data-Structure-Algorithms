#include <stdio.h>

void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int A[n1], B[n2];

    for (int i = 0; i < n1; i++) A[i] = arr[left + i];
    for (int j = 0; j < n2; j++) B[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (A[i] <= B[j]) arr[k++] = A[i++];
        else arr[k++] = B[j++];
    }

    while (i < n1) arr[k++] = A[i++];
    while (j < n2) arr[k++] = B[j++];
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = (left + right) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

int main() {
    int size;
    printf("Enter number of elements: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter elements: ");
    for (int i = 0; i < size; i++) scanf("%d", &arr[i]);

    mergeSort(arr, 0, size - 1);

    printf("Sorted array: ");
    for (int i = 0; i < size; i++) printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
