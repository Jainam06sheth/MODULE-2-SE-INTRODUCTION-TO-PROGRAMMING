//program to print numbers from 1 to 10 using 3 loops :- while, for, do-while.
#include<stdio.h>
main()
{
	int i;
	
	 // while loop
    i = 1;
    printf("Using while loop:\n");
    while (i <= 10) 
	{
        printf("%d\n", i);
        i++;
    }
    printf("___________________________\n");
    //for loop
    printf("\nUsing for loop:\n");
    for (i = 1; i <= 10; i++) 
	{
        printf("%d\n", i);
    }
	printf("___________________________\n");
    //do-while loop
    i = 1;
    printf("\nUsing do-while loop:\n");
    do {
        printf("%d\n", i);
        i++;
    } 
	while (i <= 10);

}
