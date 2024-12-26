/*#include <stdio.h>

int main(){

int num1,num2,num3,max;

printf("enter three number: ");
scanf("%d %d %d",&num1,num2,num3);

max = (num1>=num2 && num1>=num3) ? num1 : ((num2>=num1 && num2>=num3) ? num2 :num3);


printf("the maximum number is: %d", max);
    return 0;
}*/
#include <stdio.h>

int main() {
    int num1, num2, num3, max;

    printf("Enter three numbers: \n");
    scanf("%d %d %d", &num1, &num2, &num3);

    max = (num1 >= num2 && num1 >= num3) ? num1 : ((num2 >= num1 && num2 >= num3) ? num2 : num3);

    printf("The maximum number is: %d", max);

    return 0;
}
