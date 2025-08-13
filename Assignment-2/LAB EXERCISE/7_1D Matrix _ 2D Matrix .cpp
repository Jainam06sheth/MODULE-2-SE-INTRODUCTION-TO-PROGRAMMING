#include <stdio.h>

int main() {
    //1D ARRAY
    printf("1) 1D Matrix:");
    int arr1D[5];
    printf("\nEnter 5 integers for the 1D array:\n");
    for (int i = 0; i < 5; i++) 
	{
        printf("Element [%d]: ", i + 1);
        scanf("%d", &arr1D[i]);
    }

    printf("\nYou entered the 1D array:\n");
    for (int i = 0; i < 5; i++) 
	{
        printf("%d ", arr1D[i]);
    }
    printf("\n\n");

    //2D ARRAY (3x3 MATRIX)
    printf("2) 2D Matrix:");
    int matrix[3][3];
    int sum = 0;

    printf("\nEnter 9 integers for the 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) 
	{
        for (int j = 0; j < 3; j++) 
		{
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
    }

    printf("\nYou entered the 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) 
		{
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nSum of all elements in the matrix: %d\n", sum);

    return 0;
}

