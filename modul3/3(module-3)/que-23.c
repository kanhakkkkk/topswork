#include <stdio.h>

int main() {
    int num, reverse = 0, remainder;

    
    printf("Enter a number: ");
    scanf("%d", &num);

   
    for (; num != 0; num /= 10) {
        remainder = num % 10;        
        reverse = reverse * 10 + remainder; 
    }

    
    printf("Reversed Number: %d\n", reverse);

    return 0;
}
