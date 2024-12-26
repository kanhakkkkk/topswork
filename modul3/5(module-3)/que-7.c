
#include <stdio.h>

void copyString(char source[], char destination[]) {
    int i = 0;
    // Copy each character from source to destination
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0'; // Add null terminator at the end of destination string
}

int main() {
    char source[100], destination[100];

    printf("Enter the source string: ");
    scanf("%s", source);

    copyString(source, destination);

    printf("The copied string is: %s\n", destination);

    return 0;
}
