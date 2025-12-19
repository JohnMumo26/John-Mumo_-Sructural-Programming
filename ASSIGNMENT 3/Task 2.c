#include <stdio.h>

int main() {

      // Declare and initialize an integer variable
    int num = 10;
     // Declare an integer pointer
    int *ptr;
     // Store the address of num in ptr
       ptr = &num;
    printf("Value of num: %d\n", num);
    printf("Value stored in ptr (address of num): %p\n", ptr);
    printf("Address of num: %p\n", &num);
    printf("Value accessed using *ptr: %d\n", *ptr);

    return 0;
}

