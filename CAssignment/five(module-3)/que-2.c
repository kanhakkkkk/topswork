#include <stdio.h>

void separateCharacters(char str[]) {
    int i = 0;
    
    // Loop through each character of the string
    while (str[i] != '\0') {
        printf("%c\n", str[i]);  // Print each character on a new line
        i++;
    }
}

int main() {
    char str[100];

    // Input the string
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);  // Read the string, including spaces

    // Call the function to separate and print individual characters
    separateCharacters(str);

    return 0;
}
