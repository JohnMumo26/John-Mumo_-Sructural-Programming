#include <stdio.h>
#include <stdlib.h>
// Function to swap two numbers using pointers
void swapNumbers(int *x, int *y) {
    int temp;

    temp = *x;   // Store value pointed to by x
    *x = *y;     // Assign value pointed to by y to x
    *y = temp;   // Assign stored value to y
}

int main() {
    int a = 5;   // Declare and initialize variable a
    int b = 10;  // Declare and initialize variable b

    printf("Before swapping:\n");
    printf("a = %d, b = %d\n", a, b);

    // Call function by passing addresses of a and b
    swapNumbers(&a, &b);

    printf("After swapping:\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}

