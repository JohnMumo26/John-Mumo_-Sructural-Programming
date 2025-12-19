#include <stdio.h>
#include <stdio.h>

// Function using pass by value
void incrementByValue(int x) {
    x = x + 1;
    printf("Inside incrementByValue: x = %d\n", x);
}

// Function using pass by reference
void incrementByReference(int *x) {
    *x = *x + 1;
    printf("Inside incrementByReference: x = %d\n", *x);
}

int main() {
    int num = 10;

    printf("Initial value of num: %d\n", num);

    // Call pass by value function
    incrementByValue(num);
    printf("After incrementByValue: num = %d\n", num);

    // Call pass by reference function
    incrementByReference(&num);
    printf("After incrementByReference: num = %d\n", num);

    return 0;
}
