#include <stdio.h>


int isPalindrome(int num) {
    int originalNum = num; 
    int reversedNum = 0;

    
    for (; num > 0; num /= 10) {
        int digit = num % 10;        
        reversedNum = reversedNum * 10 + digit;
    }

    
    return (originalNum == reversedNum);
}

int main() {
    int num;

    
    printf("Enter a number: ");
    scanf("%d", &num);

    
    if (isPalindrome(num)) {
        printf("%d is a palindrome number.\n", num);
    } else {
        printf("%d is not a palindrome number.\n", num);
    }

    return 0;
}
