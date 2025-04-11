#include <stdio.h>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n, i;
    printf("Enter number of days: ");
    scanf("%d", &n);
    int temps[n];
    printf("Enter temperatures (in °C): ");
    for (i = 0; i < n; i++) {
        scanf("%d", &temps[i]);
    }

    bubbleSort(temps, n);

    printf("Sorted Temperatures (Bubble Sort): ");
    for (i = 0; i < n; i++) {
        printf("%d ", temps[i]);
    }
    return 0;
}
