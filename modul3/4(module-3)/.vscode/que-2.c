#include <stdio.h>

int main() {
    int choice;
    float num1, num2, result;

    do {
        
        printf("\nMenu:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4) {
           
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
        }

        switch (choice) {
            case 1: // Addition
                result = num1 + num2;
                printf("Result of Addition: %.2f\n", result);
                break;
            case 2: // Subtraction
                result = num1 - num2;
                printf("Result of Subtraction: %.2f\n", result);
                break;
            case 3: // Multiplication
                result = num1 * num2;
                printf("Result of Multiplication: %.2f\n", result);
                break;
            case 4: // Division
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("Result of Division: %.2f\n", result);
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;
            case 5: // Exit
                printf("Exiting the program. Thank you!\n");
                break;
            default: // Invalid choice
                printf("Invalid choice. Please enter a number between 1 and 5.\n");
        }
    } while (choice != 5);

    return 0;
}
