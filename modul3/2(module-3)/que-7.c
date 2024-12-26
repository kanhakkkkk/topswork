#include <stdio.h>

int main(){

int marks;

printf("enter marks: ");
scanf("%d",&marks);

if(marks >=40 && marks <=101){
    printf("pass");
}
else if(marks >=0 && marks<=40){
    printf("fail");
}
else{
    printf("invalid number");
}
    return 0;
}