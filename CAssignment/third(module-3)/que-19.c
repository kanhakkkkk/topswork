#include <stdio.h>

int main(){
    
    int number = 5;

    printf("Enter the multification no.5:\n ");

    for(int i=1; i <= 10; i++){
        printf("%d * %d = %d\n", number, i, number*i );

    }




    int rows = 5; 

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            
            if (j % 2 == 1) {
                printf("1");
            } else {
                printf("0");
            }
        }
        printf("\n"); 
    }

    char letter = 'A';
    int rows = 5;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%c ", letter);
            letter++;             
        }
        printf("\n"); 
    }
    return 0;
}
