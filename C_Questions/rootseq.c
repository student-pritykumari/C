#include <stdio.h>
#include <math.h>

// Function to find and print the roots of the quadratic equation
void findRoots(double a, double b, double c) {
    double discriminant, root1, root2, realPart, imaginaryPart;
    
    discriminant = b * b - 4 * a * c;

    // Check the discriminant to determine the nature of the roots
    if (discriminant > 0) {
        // Two distinct and real roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and different.\n");
        printf("Root 1 = %.2lf\n", root1);
        printf("Root 2 = %.2lf\n", root2);
    } else if (discriminant == 0) {
        // Two real and identical roots
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and the same.\n");
        printf("Root 1 = Root 2 = %.2lf\n", root1);
    } else {
        // Complex roots
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and different.\n");
        printf("Root 1 = %.2lf + %.2lfi\n", realPart, imaginaryPart);
        printf("Root 2 = %.2lf - %.2lfi\n", realPart, imaginaryPart);
    }
}

int main() {
    double a, b, c;

    // Input coefficients a, b, and c
    printf("Enter coefficients a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Call function to find the roots
    findRoots(a, b, c);

    return 0;
}
