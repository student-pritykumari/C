#include <stdio.h>
#include <math.h>

// Function to calculate the number of digits in a given number
int countDigits(int num) {
    int count = 0;
    while (num != 0) {
        num /= 10;
        ++count;
    }
    return count;
}

// Function to check if a number is an Armstrong number
int isArmstrong(int num) {
    int originalNum, remainder, n = 0, result = 0;

    originalNum = num;

    // Count the number of digits
    int digits = countDigits(num);

    // Calculate result
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, digits);
        originalNum /= 10;
    }

    // Check if num is Armstrong
    if (result == num)
        return 1; // num is an Armstrong number
    else
        return 0; // num is not an Armstrong number
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num))
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}