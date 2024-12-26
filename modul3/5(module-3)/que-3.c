#include <stdio.h>

int stringLength(char str[]) {
    int length = 0;

    while (str[length] != '\0') {
        length++;
    }

    return length;
}

void printReverse(char str[]) {
    int length = stringLength(str);

    for (int i = length - 1; i >= 0; i--) {
        printf("Character %d: %c\n", length - i, str[i]);
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int len = stringLength(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    printf("The individual characters in reverse order are:\n");
    printReverse(str);

    return 0;
}
