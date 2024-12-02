#include <stdio.h>

int main(){
     int monthly_salary, perday_salary;

     printf("enter per day salary: ");
     scanf("%d",&perday_salary);

    monthly_salary = perday_salary * 30;

    printf("the monthly salary is : %d",monthly_salary);




    return 0;
}