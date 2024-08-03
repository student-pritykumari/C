#include <stdio.h>


int main() {
    int choice, num;
    
    do {
        printf("Menu:\n");
        printf("1. Check Even/Odd\n");
        printf("2. Calculate Factorial\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printf("Enter a number: ");
                scanf("%d", &num);
                evenOdd(num);
                break;
            case 2:
                printf("Enter a number: ");
                scanf("%d", &num);
                if (num < 0)
                    printf("Factorial is not defined for negative numbers.\n");
                else
                    printf("Factorial of %d is %llu\n", num, factorial(num));
                break;
            case 3:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please enter a valid option.\n");
        }
        
    } while (choice != 3);

    return 0;
}