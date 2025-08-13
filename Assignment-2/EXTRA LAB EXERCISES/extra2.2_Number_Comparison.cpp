#include <stdio.h>

int main() {
    float a, b, c;
    float largest, smallest;

    printf("Enter three numbers:\n");
    scanf("%f %f %f", &a, &b, &c);
printf("\n---Using if-else statement---\n");
    if (a >= b && a >= c) 
	{
        largest = a;
    } 
	else if (b >= a && b >= c) 
	{
        largest = b;
    } 
	else 
	{
        largest = c;
    }

    if (a <= b && a <= c) {
        smallest = a;
    } else if (b <= a && b <= c) {
        smallest = b;
    } else {
        smallest = c;
    }

    printf("Largest number: %f\n", largest);
    printf("Smallest number: %f\n", smallest);

    int largestCase, smallestCase;

    if (a >= b && a >= c) {
        largestCase = 1; 
    } else if (b >= a && b >= c) {
        largestCase = 2; 
    } else {
        largestCase = 3; 
    }
    
printf("\n---Using switch-case statement---\n");
    switch (largestCase) {
        case 1:
            largest = a;
            break;
        case 2:
            largest = b;
            break;
        case 3:
            largest = c;
            break;
    }

    if (a <= b && a <= c) {
        smallestCase = 1; 
    } else if (b <= a && b <= c) {
        smallestCase = 2; 
    } else {
        smallestCase = 3; 
    }

    switch (smallestCase) {
        case 1:
            smallest = a;
            break;
        case 2:
            smallest = b;
            break;
        case 3:
            smallest = c;
            break;
    }
    printf("Largest number: %f\n", largest);
    printf("Smallest number: %f\n", smallest);

    return 0;
}

