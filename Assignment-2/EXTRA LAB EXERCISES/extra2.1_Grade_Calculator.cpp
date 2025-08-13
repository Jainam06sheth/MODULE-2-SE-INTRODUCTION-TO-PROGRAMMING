#include <stdio.h>

int main() {
    int marks;
    char grade;

    printf("Enter the marks of the student: ");
    scanf("%d", &marks);

    if (marks > 90) 
	{
        grade = 'A';
    } 
	
	else if (marks > 75 && marks <= 90) 
	{
        grade = 'B';
    } 
	
	else if (marks > 50 && marks <= 75) 
	{
        grade = 'C';
    } 
	
	else
	{
        grade = 'D';
    }
    
    printf("The grade of the student is: %c\n", grade);

    return 0;
}

