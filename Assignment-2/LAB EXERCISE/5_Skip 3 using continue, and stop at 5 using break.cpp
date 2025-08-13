// Program that uses the break statement to stop printing numbers when it reaches 5. 
// Modify the program to skip printing the number 3 using the continue statement.


#include <stdio.h>

main() {

    printf("All numbers from 1 to 10:\n");
    for (int i = 1; i <= 10; i++) {
        printf("%d\n", i);
    }
	printf("_____________________________________\n");
    
    printf("\nNumbers with skip 3 and stop 5:\n");
    for (int i = 1; i <= 10; i++) 
	{
        if (i == 3) 
		{
        continue;  // Skip 3 
        }

        printf("%d\n", i);

        if (i == 5) {
        break;     // Stop after printing 5
        }
    }

}

