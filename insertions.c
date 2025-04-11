#include <stdio.h>

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int n, i;
    printf("Enter number of products: ");
    scanf("%d", &n);
    int prices[n];
    printf("Enter product prices: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &prices[i]);
    }

    insertionSort(prices, n);

    printf("Sorted Prices (Insertion Sort): ");
    for (i = 0; i < n; i++) {
        printf("%d ", prices[i]);
    }
    return 0;
}
