#include <stdio.h>

int main() {
    int rows = 5;
    int i, j;
    char letter;

    for (i = 1; i <= rows; i++) {
        letter = 'A';
        for (j = 1; j <= i; j++) {
            printf("%c ", letter++);
        }
        printf("\n");
    }
    
    return 0;
}
