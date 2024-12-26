#include <stdio.h>

int isVowel(char ch) {
    // Convert character to lowercase to simplify checking
    ch = (ch >= 'A' && ch <= 'Z') ? ch + ('a' - 'A') : ch;
    
    // Check if character is a vowel
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

void countVowelsAndConsonants(char str[], int *vowels, int *consonants) {
    int i = 0;
    *vowels = 0;
    *consonants = 0;

    while (str[i] != '\0') {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) { // Check if it's a letter
            if (isVowel(str[i])) {
                (*vowels)++;
            } else {
                (*consonants)++;
            }
        }
        i++;
    }
}

int main() {
    char str[100];
    int vowels, consonants;

    printf("Enter a string: ");
    scanf("%[^\n]", str); // Reads a line of text, including spaces

    countVowelsAndConsonants(str, &vowels, &consonants);

    printf("Total number of vowels: %d\n", vowels);
    printf("Total number of consonants: %d\n", consonants);

    return 0;
}
