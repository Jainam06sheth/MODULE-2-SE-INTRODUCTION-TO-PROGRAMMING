//check if a number is even or odd using an if-else statement. 
//Extend the program using a switch statement to display the month name based on the input (1 for January, 2 for February, etc.).

#include <stdio.h>
 main() 
{
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("%d is even.\n", n);
    } 
	else 
	{
        printf("%d is odd.\n", n);
    }
    printf("-----\n");

    switch (n) 
	{
        case 1:  printf("January\n");
		break;
        case 2:  printf("February\n"); 
		break;
        case 3:  printf("March\n"); 
		break;
        case 4:  printf("April\n"); 
		break;
        case 5:  printf("May\n"); 
		break;
        case 6:  printf("June\n"); 
		break;
        case 7:  printf("July\n"); 
		break;
        case 8:  printf("August\n"); 
		break;
        case 9:  printf("September\n"); 
		break;
        case 10: printf("October\n"); 
		break;
        case 11: printf("November\n"); 
		break;
        case 12: printf("December\n"); 
		break;
        default: printf("Invalid number for month.\n");
    }

}

