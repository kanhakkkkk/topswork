#include <stdio.h>

int main(){

    //find the circumference of rectngle

    float circumference, area;
    printf("enter the area of rectngle:");
    scanf("%f", &area );

    circumference = 4 * area;
    printf("thea circumference of the rectangle is %f", circumference);
    return 0;
}