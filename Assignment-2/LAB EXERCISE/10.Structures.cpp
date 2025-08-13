#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    int roll;
    float marks;
} s;

int main() {
    s students[3];

    for (int i = 0; i < 3; i++) {
        printf("Enter details for student %d:\n", i + 1);

        fflush(stdin);  

        printf("Name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0';  

        printf("Roll number: ");
        while (scanf("%d", &students[i].roll) != 1) {
            printf("Invalid input. Enter an integer: ");
            while (getchar() != '\n'); 
        }

        printf("Marks: ");
        while (scanf("%f", &students[i].marks) != 1) {
            printf("Invalid input. Enter a float: ");
            while (getchar() != '\n'); 
        }

        while (getchar() != '\n'); 
        printf("\n");
    }

    printf("---Student Details---\n");
    printf("----------------------------------------\n");
    for (int i = 0; i < 3; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].roll);
        printf("Marks: %f\n", students[i].marks);
    }

    return 0;
}

