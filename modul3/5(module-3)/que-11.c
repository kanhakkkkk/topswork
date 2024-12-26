#include <stdio.h>

void extractSubstring(char source[], char destination[], int start, int length) {
    int i;
    // Check if start index is within the string bounds
    if (start < 0 || start >= strlen(source)) {
        printf("Invalid start index.\n");
        return;
    }
    
    // Copy the substring from source to destination
    for (i = 0; i < length && source[start + i] != '\0'; i++) {
        destination[i] = source[start + i];
    }
    
    destination[i] = '\0'; // Null-terminate the destination string
}

int main() {
    char source[100], destination[100];
    int start, length;

    // Input the source string
    printf("Enter the source string: ");
    scanf("%[^\n]", source);  // Reads a line of text including spaces

    // Input the starting position of the substring
    printf("Enter the starting position of the substring: ");
    scanf("%d", &start);

    // Input the length of the substring
    printf("Enter the length of the substring: ");
    scanf("%d", &length);

    // Call the function to extract the substring
    extractSubstring(source, destination, start, length);

    // Output the extracted substring
    printf("The extracted substring is: \"%s\"\n", destination);

    return 0;
}
