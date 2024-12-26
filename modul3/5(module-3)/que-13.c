#include <stdio.h>

void removeNonAlphaChars(char str[]) {
    int i = 0, j = 0;
    
    // Loop through the string
    while (str[i] != '\0') {
        // Check if the character is an alphabet (either uppercase or lowercase)
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            str[j] = str[i];  // Keep the character
            j++;
        }
        i++;
    }
    
    str[j] = '\0'; // Null-terminate the resulting string
}

int main() {
    char str[100];

    // Input the string
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);  // Read the string, including spaces

    // Remove non-alphabet characters
    removeNonAlphaChars(str);

    // Output the string with only alphabets
    printf("String after removing non-alphabet characters: %s\n", str);

    return 0;
}
