#include <stdio.h>



#include <stdio.h>
#include <math.h>

int main() {

    float fahrenheit, celsius;


    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

  
    celsius = (fahrenheit - 32) * 5 / 9;

    printf("Temperature in Celsius: %.2f\n", celsius);

    return 0;

    return 0;
}