#include <stdio.h>

int main() {
    int start = 1; 
    int end = 50;  
    int columns = 10; 

    for (int i = start; i <= end; i++) {
        printf("%02d ", i); 
        if (i % columns == 0) {
            printf("\n"); 
        }
    }

    return 0;
}
