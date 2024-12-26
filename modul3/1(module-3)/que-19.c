#include <stdio.h>
#include <math.h>

int main(){

float principle, rate, time, compound_intrest;
int n;

printf("enter the priciple amount: ");
scanf("%f",&principle);

printf("enter rate: ");
scanf("%f",&rate);

printf("enter time: ");
scanf("%f",&time);

printf("enter number of time per year: ");
scanf("%d",&n);

compound_intrest = principle * pow(( 1 + (rate / (100 * n))), n * time);

printf("the compound intrest after %d year is: %f", time,compound_intrest);


    return 0;
}