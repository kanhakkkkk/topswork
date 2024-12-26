#include <stdio.h>

int main(){

    //find the circumference of tringle
    float tringle, triA, triB, triC;

    printf("enter the circumference of triA");
    scanf("%f", &triA);

    printf("enter the circumference of triB");
    scanf("%f", &triB);

    printf("enter the circumference of triC");
    scanf("%f", &triC);

    tringle = triA+triB+triC;
    printf("the cicumference of tringle %f", tringle);

    return 0;
}