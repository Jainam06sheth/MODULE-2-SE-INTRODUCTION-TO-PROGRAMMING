#include<stdio.h>

int main()
{
	int num;
	printf("Enter any number:");
	scanf("%d",&num);
	if(num % 2 == 0)
	{
		printf("=> %d is an even number.\n",num);
	}
	else
	{
		printf("=> %d is an odd number.\n",num);
	}
	
	
	if (num > 0) {
        printf("=> %d is a positive number.\n", num);
    } 
	else if (num < 0) 
	{
        printf("=> %d is a negative number.\n", num);
    } 
	else 
	{
        printf("=> %d is zero.\n", num);
    }
    
    
    if (num % 3 == 0 && num % 5 == 0) 
	{
        printf("=> %d is the multiple of both 3 and 5.\n", num);
    } 
	else 
	{
        printf("=> %d is not the multiple of both 3 and 5.\n", num);
    }
	
return 0;	
}
