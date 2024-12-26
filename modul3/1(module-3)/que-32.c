#include <stdio.h>

int main() {
    int num1, num2, sum;

    
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;
    printf("The sum of %d and %d is: %d\n", num1, num2, sum);

    printf("The size of the sum in bytes is: %zu", sizeof(sum));

    return 0;
}
