#include <stdio.h>
#include <math.h>

int countDigits(int num);
int isArmstrong(int num);
void printBreakdown(int num);
const char* getOrdinalSuffix(int num);

int main() {
    int number;

    printf("Enter a number to check if it's an Armstrong number: ");
    scanf("%d", &number);

    printBreakdown(number);

    if (isArmstrong(number)) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is NOT an Armstrong number.\n", number);
    }

    printf("\nArmstrong numbers between 1 and 1000:\n");
    for (int i = 1; i <= 1000; i++) {
        if (isArmstrong(i))
            printf("%d ", i);
    }
    printf("\n");

    return 0;
}

int countDigits(int num) {
    int count = 0;
    while (num != 0) {
        count++;
        num /= 10;
    }
    return count;
}

int isArmstrong(int num) {
    int original = num;
    int digits = countDigits(num);
    int sum = 0;

    while (num != 0) {
        int digit = num % 10;
        sum += pow(digit, digits);
        num /= 10;
    }

    return (sum == original);
}

const char* getOrdinalSuffix(int num) 
{
    if (num % 100 >= 11 && num % 100 <= 13) 
	{
    return "th";
	}
	
    switch (num % 10) 
	{
        case 1: return "st";
        case 2: return "nd";
        case 3: return "rd";
        default: return "th";
    }
}

void printBreakdown(int num) 
{
    int digits = countDigits(num);
    int temp = num;
    int reversedDigits[10];
    int index = 0;
    int sum = 0;

    while (temp != 0) 
	{
        reversedDigits[index++] = temp % 10;
        temp /= 10;
    }

    printf("\n");
    for (int i = index - 1, pos = 1; i >= 0; i--, pos++) 
	{
        int digit = reversedDigits[i];
        int result = (int)pow(digit, digits);
        sum += result;
        printf("%d%s element is %d: %d^%d = %d\n", pos, getOrdinalSuffix(pos), digit, digit, digits, result);
    }

    printf("%d", (int)pow(reversedDigits[index - 1], digits));
    for (int i = index - 2; i >= 0; i--) {
        printf(" + %d", (int)pow(reversedDigits[i], digits));
    }
    printf(" = %d\n", sum);
}
