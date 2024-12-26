#include <stdio.h>

int main(){

int num, power1, power2, power3;

printf("enter a integer: ");
scanf("%d",&num);

power1 = num;
power2 = num + num;
power3 = num + num + num;

printf("the power1 is: %d \n", power1);
printf("the power2 is: %d \n", power2);
printf("the power3 is: %d \n", power3);

    return 0;
}