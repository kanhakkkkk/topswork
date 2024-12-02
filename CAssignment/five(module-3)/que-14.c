#include <stdio.h>

void combineStrings(char str1[], char str2[], char result[]) {
    int i = 0, j = 0;

    // Copy first string (str1) to result
    while (str1[i] != '\0') {
        result[i] = str1[i];
        i++;
    }

    // Append second string (str2) to result
    while (str2[j] != '\0') {
        result[i] = str2[j];
        i++;
        j++;
    }

    // Null-terminate the result string
    result[i] = '\0';
}

int main() {
    char str1[100], str2[100], result[200];

    // Input the two strings
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);  // Read first string

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);  // Read second string

    // Remove the newline character from fgets (if it exists)
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    // Combine the two strings
    combineStrings(str1, str2, result);

    // Output the combined string
    printf("Combined string: %s\n", result);

    return 0;
}
