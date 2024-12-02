#include <stdio.h>

int main() {
    int num, firstDigit, lastDigit, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    lastDigit = num % 10;

    firstDigit = num;
    while (firstDigit >= 10) {
        firstDigit /= 10;
    }

    result = firstDigit - lastDigit;

    printf("The result (first - last digit) is: %d\n", result);

    return 0;
}
