#include<stdio.h>
int main(){
    int num1,num2,res;
    printf("Enter num1 and num2:");
    scanf("%d %d",&num1,&num2);
    printf("Addition:");
    res=num1+num2;
    printf("\n Total=%d",res);
    res=num1-num2;
    printf("\n Subtraction=%d",res);
    res=num1*num2;
    printf("\n Multiplication=%d",res);
     res=num1/num2;
    printf("\n Division=%d",res);
     res=num1%num2;
    printf("\n Modulo=%d",res);

}