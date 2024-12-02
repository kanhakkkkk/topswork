#include <stdio.h>

void extractSubstring(char source[], char destination[], int start, int length) {
    int i;
    // Copy substring from source to destination
    for (i = 0; i < length && source[start + i] != '\0'; i++) {
        destination[i] = source[start + i];
    }
    destination[i] = '\0'; // Null-terminate the destination string
}

int main() {
    char source[100], destination[100];
    int start, length;

    printf("Enter the source string: ");
    scanf("%[^\n]", source);  // Reads a line of text including spaces

   
