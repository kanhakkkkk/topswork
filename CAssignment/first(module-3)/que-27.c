#include <stdio.h>

int main(){

int days;
float month;

printf("enter the number of days: ");
scanf("%d",&days);

month = days/30;
printf("the number of month is: %f", month);

    return 0;
}