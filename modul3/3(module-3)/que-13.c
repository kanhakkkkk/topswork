#include <stdio.h>

int main(){

int num, factorial = 1;

printf("enter the positive number: ");
scanf("%d",&num);

int temp = num;

while(temp >1 ){
    factorial *= temp;
    temp--;
}
printf("factorial of %d = %d\n",num, factorial);


    return 0;
}