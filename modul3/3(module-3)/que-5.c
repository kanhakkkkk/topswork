#include <stdio.h>

int main(){

int num;
unsigned long long factorial = 1;


printf("enter number: ");
scanf("%d",&num);

if(num<0){
    printf("nagative number have not faactorial");
}
else{
    for(int i=1; i <= num; i++) {
        factorial *= i;
    }
    printf("factorial of %d = %llu\n",num , factorial);
}

    return 0;
}