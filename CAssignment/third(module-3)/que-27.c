#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {

            sum += (float)i / (i + 1);
        } else {

            sum -= (float)i / (i + 1);
        }
    }

    printf("The result of the series is: %.2f\n", sum);

    return 0;
}
