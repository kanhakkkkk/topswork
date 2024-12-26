#include <stdio.h>

int main(){

float years, days;

printf("enter the number of years is : ");
scanf("%f",& years);

days = years * 365;
printf("the number of days is %f days\n", days);

years = days/365;
printf("the number of year is : %f years", years);


    return 0;
}