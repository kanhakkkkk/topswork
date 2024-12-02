#include <stdio.h>

int main() {
    int n, count = 1, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1; 
    }

    while (count <= n) {
        sum += count;  
        count++;
    }

    printf("The sum of the first %d natural numbers is: %d\n", n, sum);

    return 0;
}
