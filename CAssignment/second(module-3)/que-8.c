#include <stdio.h>

int main(){

float hight;

printf("enter hight: ");
scanf("%f",&hight);

if (hight <=5.0){
    printf("small hight");
}
else if("hight >=4.9 && hight <=6.1"){
    printf("midium hight");
}
else if("hight >=5.9"){
    printf("tall hight");
}
        return 0;
}