#include <stdio.h>

int main() {
    int angle1, angle2, angle3;

    printf("Enter three angles of the triangle: ");
    scanf("%d %d %d", &angle1, &angle2, &angle3);

    if (angle1 + angle2 + angle3 == 180) {
        printf("Yes, a triangle can be formed with these angles.\n");
    }
     else 
     {
        printf("No, a triangle cannot be formed with these angles.\n");
    }

    return 0;
}
