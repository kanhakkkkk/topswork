#include <stdio.h>
#include <string.h>

void findLargestAndSmallestWords(char str[], char largest[], char smallest[]) {
    int i = 0, j = 0, wordLen = 0;
    int maxLen = 0, minLen = 1000; // Large value for minLen to start with
    int start = 0;

    // Loop through the string to find words
    while (str[i] != '\0') {
        // Skip spaces
        while (str[i] == ' ' && str[i] != '\0') {
            i++;
        }

        start = i;
        // Find the end of the current word
        while (str[i] != ' ' && str[i] != '\0') {
            i++;
        }

        wordLen = i - start;

        // If the word is the largest, update largest
        if (wordLen > maxLen) {
            maxLen = wordLen;
            for (j = 0; j < wordLen; j++) {
                largest[j] = str[start + j];
            }
            largest[wordLen] = '\0';
        }

        // If the word is the smallest, update smallest
        if (wordLen < minLen) {
            minLen = wordLen;
            for (j = 0; j < wordLen; j++) {
                smallest[j] = str[start + j];
            }
            smallest[wordLen] = '\0';
        }
    }
}

int main() {
    char str[100], largest[100], smallest[100];

    // Input the string
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin); // Read a line of text, including spaces

    // Remove the newline character from fgets (if it exists)
    str[strcspn(str, "\n")] = '\0';

    // Call the function to find the largest and smallest words
    findLargestAndSmallestWords(str, largest, smallest);

    // Output the largest and smallest words
    printf("Largest word: %s\n", largest);
    printf("Smallest word: %s\n", smallest);

    return 0;
}
