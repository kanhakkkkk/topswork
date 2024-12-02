#include <stdio.h>

int main(){

int monthly_salary, insurance_primium, remaning_amount;

printf("enter monthly salary : ");
scanf("%d",&monthly_salary);

printf("enter insurance_primium amount");
scanf("%d",&insurance_primium);

remaning_amount = monthly_salary - insurance_primium;

printf("the remaning saving amount is %d ", remaning_amount);


    return 0;
}