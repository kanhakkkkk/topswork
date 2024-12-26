#include <stdio.h>

int main() {
    int n;
    double term = 1;
    int multiplier = 2;

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("%.0f ", term); 

        if (i % 2 == 0) {
            term *= 1.5; 
        } else {
            term *= 2; 
        }
    }

    printf("\n");

    return 0;
}
