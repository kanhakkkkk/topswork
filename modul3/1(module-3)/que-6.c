#include <stdio.h>


int main(){

    float base, area, hight;

    printf("enter the base of tringle");
    scanf("%f", &base);

    pritnf("enter the hight of tringle");
    scanf("%f", &hight);  

    area = 0.5 * base * hight;

    printf("the area of ratengle is:%.2f", area);

    return 0;
}

/*#include <stdio.h>

int main() {
    float base, height, area;

    // Take input for base and height
    printf("Enter the base of the triangle: ");
    scanf("%f", &base);
    printf("Enter the height of the triangle: ");
    scanf("%f", &height);

    // Calculate the area using the formula
    area = 0.5 * base * height;

    // Print the result
    printf("The area of the triangle is: %.2f\n", area);

    return 0;
}
*/