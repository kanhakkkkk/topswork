#include <stdio.h>

int main(){

char name[5][50];

for(int i=0; i<5; i++){
    printf("enter name is: %d", i + 1);
    scanf("%49s",name[i]);
}

printf("the named are:\n");
for(int i=0 ; i<5; i++){
    printf("%s\n",name[i]);
}
    return 0;
}
