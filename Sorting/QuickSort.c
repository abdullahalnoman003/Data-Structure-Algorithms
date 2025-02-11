#include <stdio.h>

int Abdullah1(int Noman[], int low, int high) {
    int pivot = Noman[high];
    int i = low - 1;
    int n_temp;

    for (int j = low; j < high; j++) {
        if (Noman[j] < pivot) {
            i++;
            n_temp = Noman[i];
            Noman[i] = Noman[j];
            Noman[j] = n_temp;
        }
    }

    n_temp = Noman[i + 1];
    Noman[i + 1] = Noman[high];
    Noman[high] = n_temp;

    return i + 1;
}

void Abdullah(int Noman[], int low, int high) {
    if (low < high) {
        int pivot = Abdullah1(Noman, low, high);
        Abdullah(Noman, low, pivot - 1);
        Abdullah(Noman, pivot + 1, high);
    }
}

int main() {
    int n;
    printf("Enter the array size: ");
    scanf("%d", &n);

    int Noman[n];
    printf("Enter the array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &Noman[i]);
    }

    printf("Array Element Before Sorting: ");
    for (int i = 0; i < n; i++) {
        printf("%d, ", Noman[i]);
    }

    Abdullah(Noman, 0, n - 1);

    printf("\nAfter Sorting the Array is: ");
    for (int i = 0; i < n; i++) {
        printf("%d, ", Noman[i]);
    }

    return 0;
}
