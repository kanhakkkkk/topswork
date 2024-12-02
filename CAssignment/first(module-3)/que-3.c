#include<stdio.h>
#define PI 3.1416  // Define constant value for pi

// Function to calculate area and circumference
void circle_properties(float radius, float *area, float *circumference) {
    *area = PI * radius * radius;  // Area formula
    *circumference = 2 * PI * radius;  // Circumference formula
}
int main(){

    
     float radius, area, circumference;

    // Input radius from user
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate area and circumference
    circle_properties(radius, &area, &circumference);

    // Display the results
    printf("Area of the circle: %.2f\n", area);
    printf("Circumference of the circle: %.2f\n", circumference);

    return 0;














    return 0;
}