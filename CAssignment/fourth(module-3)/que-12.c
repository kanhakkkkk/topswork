#include <stdio.h>

int main() {
    char students[5][100]; 

    
    printf("Enter the names of 5 students:\n");
    for (int i = 0; i < 5; i++) {
        printf("Enter name of student %d: ", i + 1);
        fgets(students[i], sizeof(students[i]), stdin);


        students[i][strcspn(students[i], "\n")] = '\0';
    }


    printf("\nList of student names:\n");
    for (int i = 0; i < 5; i++) {
        printf("Student %d: %s\n", i + 1, students[i]);
    }

    return 0;
}
