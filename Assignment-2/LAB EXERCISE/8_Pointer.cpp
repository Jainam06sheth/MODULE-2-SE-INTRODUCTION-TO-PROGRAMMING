#include <stdio.h>

int main() {
    int age = 19;   
    int *ptr = &age;    

    printf("Original value of age: %d\n", age);

    *ptr = 20;

    printf("Modified value of num using pointer: %d\n", age);

    return 0;
}

