#include <stdio.h>

int main() {
    int a, start_range, end_range;

    printf("Enter a number to print its multiplication table:");
    scanf("%d", &a);

    printf("Enter the starting value of the range: ");
    scanf("%d", &start_range);

    printf("Enter the ending value of the range:");
    scanf("%d", &end_range);

    if (start_range > end_range) {
        printf("Invalid range.\nStart should be less than or equal to end.\n");
        return 1;
    }

    printf("\nMultiplication table of %d from %d to %d:\n", a, start_range, end_range);
    for (int i=start_range; i<=end_range; i++)
    {
        printf("%d x %d = %d\n", a, i, a*i);
    }

return 0;
}

