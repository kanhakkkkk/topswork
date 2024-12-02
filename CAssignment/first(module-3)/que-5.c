#include <stdio.h>

int main(){
    int side, surface_area;
// Input: Read side length from the user
    printf("Enter the length of the side of the cube: ");
    scanf("%f", &side);

    // Calculation: Surface Area = 6 * (side * side)
    surface_area = 6 * (side * side);

    // Output: Display the surface area
    printf("The surface area of the cube is: %.2f square units\n", surface_area);
    return 0;
}