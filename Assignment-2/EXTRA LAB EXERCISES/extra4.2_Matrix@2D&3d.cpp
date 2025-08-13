#include <stdio.h>

int main() {
    int a2[2][2], b2[2][2], sum2[2][2];
    int a3[3][3], b3[3][3], sum3[3][3], product3[3][3];

    // Input for 2x2 matrices
    printf("Enter elements for 2x2 Matrix A:\n");
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &a2[i][j]);
        }

    printf("\nEnter elements for 2x2 Matrix B:\n");
    for (int i = 0; i < 2; i++)
    {
    	  for (int j = 0; j < 2; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &b2[i][j]);
        }
	}
      

    // Compute 2x2 sum
    for (int i = 0; i < 2; i++){
    	for (int j = 0; j < 2; j++){
    		sum2[i][j] = a2[i][j] + b2[i][j];
		}
            
	}
        

    // Display updated 2x2 addition
    printf("\n=>2x2 Matrix Addition:\n");
    printf("|%d %d|       |%d %d|       |%d %d|\n",
           a2[0][0], a2[0][1], b2[0][0], b2[0][1], sum2[0][0], sum2[0][1]);
    printf("|%d %d|   +   |%d %d|   =   |%d %d|\n",
           a2[1][0], a2[1][1], b2[1][0], b2[1][1], sum2[1][0], sum2[1][1]);

    // Input for 3x3 matrices
    printf("\nEnter elements for 3x3 Matrix A:\n");
    for (int i = 0; i < 3; i++)
    {
    	 for (int j = 0; j < 3; j++) 
		{
    	  printf("A[%d][%d]: ", i, j);
            scanf("%d", &a3[i][j]);
        }
	}
       

    printf("\nEnter elements for 3x3 Matrix B:\n");
    for (int i = 0; i < 3; i++){
    	 for (int j = 0; j < 3; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &b3[i][j]);
        }
	}
       

    // Compute 3x3 sum
    for (int i = 0; i < 3; i++){
    	for (int j = 0; j < 3; j++){
        	sum3[i][j] = a3[i][j] + b3[i][j];
		}
	}
        
            

    // Compute 3x3 product
    for (int i = 0; i < 3; i++){
    	for (int j = 0; j < 3; j++) {
            product3[i][j] = 0;
            for (int k = 0; k < 3; k++){
            	 product3[i][j] += a3[i][k] * b3[k][j];
			}
	}
        
               
        }

    // Display 3D-style 3x3 addition
    printf("\n=>3x3 Matrix Addition:\n");
    for (int i = 0; i < 3; i++) {
        printf("|%d %d %d|", a3[i][0], a3[i][1], a3[i][2]);
        if (i == 1) printf("  +  ");
        else printf("     ");
        printf("|%d %d %d|", b3[i][0], b3[i][1], b3[i][2]);
        if (i == 1) printf("  =  ");
        else printf("     ");
        printf("|%d %d %d|\n", sum3[i][0], sum3[i][1], sum3[i][2]);
    }

    // Display 3D-style 3x3 multiplication
    printf("\n=>3x3 Matrix Multiplication:\n");
    for (int i = 0; i < 3; i++) {
        printf("|%d %d %d|", a3[i][0], a3[i][1], a3[i][2]);
        if (i == 1) printf("  x  ");
        else printf("     ");
        printf("|%d %d %d|", b3[i][0], b3[i][1], b3[i][2]);
        if (i == 1) printf("  =  ");
        else printf("     ");
        printf("|%d %d %d|\n", product3[i][0], product3[i][1], product3[i][2]);
    }

    return 0;
}

