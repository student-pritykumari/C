#include <stdio.h>

// Function to swap two integers using call by value
void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;

    printf("Before swap: x = %d, y = %d\n", x, y);

    // Call the swap function with arguments x and y
    swap(x, y);

    printf("After swap: x = %d, y = %d\n", x, y);

    return 0;
}
