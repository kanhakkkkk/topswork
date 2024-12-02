#include <stdio.h>

int main() {
    int n, sum = 0, partialSum = 0;

   
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    
    for (int i = 1; i <= n; i++) {
        partialSum = 0; 
        for (int j = 1; j <= i; j++) {
            partialSum += j; 
        }
        sum += partialSum; 
    }

    printf("The sum of the series is: %d\n", sum);

    return 0;
}
