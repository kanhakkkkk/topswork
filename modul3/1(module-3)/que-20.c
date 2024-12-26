#include <stdio.h>

int main(){

int monthly_salary, primium, loan, remaning_amount;

printf("enter monthly salary: ");
scanf("%d",&monthly_salary);

printf("enter primum amount: ");
scanf("%d",&primium);

printf("enter lone amount: ");
scanf("%d",&loan);

remaning_amount = monthly_salary - (primium + loan);

printf("the remaning amount of a salary is %d ", remaning_amount);

    return 0;
}