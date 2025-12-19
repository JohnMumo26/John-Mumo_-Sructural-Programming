#include <stdio.h>

int main() {
      // Declare and initialize first integer variable
    int num1 = 10;
        // Declare and initialize second integer variable
    int num2 = 20;
     // Declare pointer for num1
    int *ptr1;
    // Declare pointer for num2
    int *ptr2;
       // Assign address of num1 to ptr1
    ptr1 = &num1;
        // Assign address of num2 to ptr2
    ptr2 = &num2;
            // Declare variable to store the sum
    int sum;
     // Add values using pointer dereferencing
    sum = *ptr1 + *ptr2;

    printf("Sum of num1 and num2: %d\n", sum);

    return 0;
}

