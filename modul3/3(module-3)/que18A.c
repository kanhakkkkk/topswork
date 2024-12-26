#include <stdio.h>

int main() {
    int rows = 5;
    int i, j, k = 0;

    // Print the binary-like numbers
    for (i = 1; i <= rows; i++) {
        for (j = 0; j < i; j++) {
            printf("1 ");
        }
        for (j = 0; j < i - 1; j++) {
            printf("0 ");
        }
        printf("\n");
    }

    printf("\n");

    // Print letters in increasing pattern
    char letter = 'A';
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("%c ", letter++);
        }
        printf("\n");
    }
    
    return 0;
}

