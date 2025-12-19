#include <stdio.h>

int main() {
    // Declare and initialize an integer variable
    int count = 10;
    // Declare an integer pointer
    int *pCount;
     // Assign the address of count to the pointer
    pCount = &count;
     // Modify the value of count using the pointer
    *pCount = 25;

    printf("Updated value of count: %d\n", count);

    return 0;
}

