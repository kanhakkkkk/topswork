#include <stdio.h>

int main()
{

    int m, n, o;
    printf("m=");
    scanf("%d", &m);

    printf("n=");
    scanf("%d", &n);


    printf("addition");
    o=m+n;    
    printf("\ntotal=%d\n",o);

    printf("substraction");
    o=m-n;
    printf("\n total=%d\n",o);

    printf("multification");
    o=m*n;
    printf("\n total=%d\n",o);

    printf("division");
    o=m/n;
    printf("\n total=%d\n",o);

    printf("module");
    o=m%n;
    printf("\n total=%d",o);

    

    return 0;
}
