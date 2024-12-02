#include <stdio.h>


struct StructureExample {
    int intValue;
    float floatValue;
    char charValue;
};


union UnionExample {
    int intValue;
    float floatValue;
    char charValue;
};

int main() {
    
    struct StructureExample structEx;
    union UnionExample unionEx;

    printf("Demonstrating Structure:\n");
    
    structEx.intValue = 10;
    structEx.floatValue = 20.5;
    structEx.charValue = 'A';

    printf("Structure intValue: %d\n", structEx.intValue);
    printf("Structure floatValue: %.2f\n", structEx.floatValue);
    printf("Structure charValue: %c\n", structEx.charValue);

    printf("\nDemonstrating Union:\n");
    unionEx.intValue = 10;
    printf("Union intValue: %d\n", unionEx.intValue);

    unionEx.floatValue = 20.5; 
    printf("Union floatValue: %.2f\n", unionEx.floatValue);

    unionEx.charValue = 'A'; 
    printf("Union charValue: %c\n", unionEx.charValue);

    printf("\nSize Comparison:\n");
    printf("Size of Structure: %lu bytes\n", sizeof(struct StructureExample));
    printf("Size of Union: %lu bytes\n", sizeof(union UnionExample));

    return 0;
}
