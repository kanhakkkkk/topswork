#include <stdio.h>
#include <string.h>

int countWordOccurrences(char str[], const char *word) {
    int count = 0;
    int i, j;
    int wordLen = strlen(word);

    for (i = 0; str[i] != '\0'; i++) {
        // Check if the substring starting at position i matches the word
        for (j = 0; word[j] != '\0' && str[i + j] == word[j]; j++) {
            // Continue checking each character of the word
        }
        
        // If we've matched all characters of the word
        if (j == wordLen) {
            count++;
            i += j - 1; // Skip past the matched word
        }
    }

    return count;
}

int main() {
    char str[100];
    const char *word = "is";

    // Input the string
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);  // Read a line of text, including spaces

    // Remove the newline character from fgets (if it exists)
    str[strcspn(str, "\n")] = '\0';

    // Call the function to count occurrences of the word "is"
    int occurrences = countWordOccurrences(str, word);

    // Output the result
    printf("The word 'is' appears %d times in the string.\n", occurrences);

    return 0;
}
