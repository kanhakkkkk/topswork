#include <stdio.h>

int main() {
    int num;

    printf("Enter the number up to which you want tables: ");
    scanf("%d", &num);


    for (int i = 1; i <= num; i++) {
        printf("\nMultiplication Table of %d:\n", i);
        for (int j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
    }

    return 0;
}
