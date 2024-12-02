#include <stdio.h>

int main() {
    int numbers[10];
    int even_count = 0;

    // Input 10 numbers from the user
    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);

        // Check if the number is even
        if (numbers[i] % 2 == 0) {
            even_count++;
        }
    }

    // Display the count of even numbers
    printf("There are %d even numbers.\n", even_count);

    return 0;
}
