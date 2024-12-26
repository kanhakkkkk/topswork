#include <stdio.h>

#define SIZE 10  // Define the size of the matrix (10x10)

int main() {
    int matrix[SIZE][SIZE] = {0};  // Initialize a 10x10 matrix with zeros
    int num = 1;
    int top = 0, bottom = SIZE - 1, left = 0, right = SIZE - 1;

    while (num <= SIZE * SIZE) {
        // Fill the top row from left to right
        for (int i = left; i <= right; i++) {
            matrix[top][i] = num++;
        }
        top++;

        // Fill the right column from top to bottom
        for (int i = top; i <= bottom; i++) {
            matrix[i][right] = num++;
        }
        right--;

        // Fill the bottom row from right to left
        for (int i = right; i >= left; i--) {
            matrix[bottom][i] = num++;
        }
        bottom--;

        // Fill the left column from bottom to top
        for (int i = bottom; i >= top; i--) {
            matrix[i][left] = num++;
        }
        left++;
    }

    // Print the matrix
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%4d", matrix[i][j]);  // Print each number with a width of 4 for alignment
        }
        printf("\n");
    }

    return 0;
}
