//Write a C program that includes variables, constants, and comments. 
//Declare and use different data types (int, char, float) and display their values.


#include <stdio.h>

int main() {
    // Declare a constant using the 'const' keyword
    const float pi = 3.14;

    // Declare variables of different data types
    int age = 19;              // Integer variable
    char ch = 'A';        // Character variable
    float weight = 55.5;       // Floating-point variable

    printf("Basic Information:\n");
    printf("-------------------\n");
    printf("Age: %d years\n", age);
    printf("Grade: %c\n", ch);
    printf("Weight: %f kg\n", weight);
    printf("Value of Pi: %f\n", pi);
}

