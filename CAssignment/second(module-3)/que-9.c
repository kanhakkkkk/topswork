#include <stdio.h>

int main(){

char ch;

printf("enter character/number/dihit: ");
scanf("%c",&ch);

if(ch >='A' && ch <='Z'){
    printf("uppercase character");
}
else if(ch >='a' && ch <='z'){
printf("lowercase character");
}
else if(ch >='0' && ch <= '9'){
printf("digit");
}
else{
printf("spacial character");
}
    return 0;
}