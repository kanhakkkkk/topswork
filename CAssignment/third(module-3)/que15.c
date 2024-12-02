#include <stdio.h>

int main(){

int sum=0;
int i=1;

int num[10] = {2,3,7,5,3,9,0,5,1,7};

while(i<=10){
    sum += num[1];
    i++;
}
printf("The sum of 10 number is: %d",sum);
    return 0;
}