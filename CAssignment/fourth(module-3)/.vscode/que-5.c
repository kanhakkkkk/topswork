#include <stdio.h>

void sortArray(int arr[], int size, int order) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if ((order == 1 && arr[j] > arr[j + 1]) || (order == 2 && arr[j] < arr[j + 1])) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void displayArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n1, n2, order;

    printf("Enter the size of the first array: ");
    scanf("%d", &n1);
    printf("Enter the size of the second array: ");
    scanf("%d", &n2);

    int arr1[n1], arr2[n2];

    printf("Enter %d elements for the first array:\n", n1);
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter %d elements for the second array:\n", n2);
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    printf("Choose sorting order:\n");
    printf("1. Ascending\n");
    printf("2. Descending\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &order);

    if (order != 1 && order != 2) {
        printf("Invalid choice! Exiting program.\n");
        return 0;
    }

    sortArray(arr1, n1, order);
    sortArray(arr2, n2, order);

    printf("Sorted first array:\n");
    displayArray(arr1, n1);

    printf("Sorted second array:\n");
    displayArray(arr2, n2);

    return 0;
}
