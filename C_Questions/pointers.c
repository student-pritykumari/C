#include <stdio.h>

// Function to interchange values of two variables
void interchange_values(int *a, int *b) {
    // Temporary variable to store the value of 'a'
    int temp = *a;
    // Assigning the value of 'b' to 'a'
    *a = *b;
    // Assigning the value stored in 'temp' (original value of 'a') to 'b'
    *b = temp;
}

int main() {
    int a, b;

    // Taking input from user
    printf("Enter the value of first variable (a): ");
    scanf("%d", &a);
    printf("Enter the value of second variable (b): ");
    scanf("%d", &b);

    // Displaying the values before interchange
    printf("Before Interchange:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    // Interchanging the values using the function
    interchange_values(&a, &b);

    // Displaying the values after interchange
    printf("\nAfter Interchange:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}