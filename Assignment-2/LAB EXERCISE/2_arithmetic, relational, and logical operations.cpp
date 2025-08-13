//A program that accepts two integers from the user and performs arithmetic, relational, and logical operations on them. 

#include<stdio.h>
#include <stdio.h>

main() 
{
    int x, y;
    
    printf("Enter first integer (x): ");
    scanf("%d", &x);

    printf("Enter second integer (y): ");
    scanf("%d", &y);

    // Arithmetic Operations
    printf("\n--- Arithmetic Operations ---\n");
    printf("x + y = %d\n", x + y);
    printf("x - y = %d\n", x - y);
    printf("x * y = %d\n", x * y);
    if (y != 0) {
        printf("x / y = %d\n",  x / y);     
        printf("x %% y = %d\n", x % y);   
    } 
	else 
	{
        printf("Division and modulus by zero are not allowed.\n");
    }
    
    printf("\nNote:- 0 means false,1 means true in relational, and logical operations.\n\n");
    // Relational Operations
    printf("\n--- Relational Operations ---\n");
    
    printf("x == y : %d\n", x == y);
    printf("x != y : %d\n", x != y);
    printf("x > y : %d\n", x > y);
    printf("x < y : %d\n", x < y);
    printf("x >= y : %d\n", x >= y);
    printf("x <= y: %d\n", x <= y);

    // Logical Operations
    printf("\n--- Logical Operations ---\n");
    printf("x > y && x <= y: %d\n", x > y && x <= y);     // True if both are non-zero
    printf("x > y || x <= y: %d\n", x > y || x <= y);     // True if at least one is non-zero
    printf("!(x > y && x <= y): %d\n", !(x > y && x <= y)); // True if x is zero

    
}

