#include <stdio.h>

int main(){

    //find the character value of ascii
    int ascii;
    char character;

    printf("enter an ascii code(0-127)\n");
    scanf("%d", &ascii);

    if(ascii>=0 && ascii<=127){
        character =(char) ascii;
        printf("the charter corresponding to ascci code %d is: %c\n", character,ascii );
    }
    else{
        printf("invalid ascii code. plase enter valide code from 0 to 127.");
    }
    return 0;
}