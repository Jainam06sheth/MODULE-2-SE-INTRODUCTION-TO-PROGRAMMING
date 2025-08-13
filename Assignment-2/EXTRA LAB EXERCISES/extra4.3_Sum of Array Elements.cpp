#include <stdio.h>

int main() {
    int n;
    float sum = 0, average;

    printf("Enter the number of elements (N):");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid size. N must be greater than 0.\n");
        return 1;
    }

    int arr[n];

    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element [%d]: ", i);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
  
    average = sum / n;

    printf("\nSum of array elements: %f\n", sum);
    printf("Average of array elements: %f\n", average);

    return 0;
}

