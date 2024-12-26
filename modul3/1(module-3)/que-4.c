#include <stdio.h>

int main(){

 float side, area;

    // Input: Read side length from the user
    printf("Enter the length of the side of the square: ");
    scanf("%f", &side);

    // Calculation: Area = side * side
    area = side * side;

    // Output: Display the area
    printf("The area of the square is: %.2f square units\n", area);

    return 0;
}
  