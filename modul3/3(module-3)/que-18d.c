#include <stdio.h>

int main() {
    int n = 15;
    int num = 1;
    int i, j;

    for (i = 1; num <= n; i++) {
        for (j = 1; j <= i && num <= n; j++) {
            printf("%d ", num++);
        }
        printf("\n");
    }
    
    return 0;
}
