#include <stdio.h>
#include <stdio.h>

int main() {
    int n;
    printf("Input the size of array: ");
    scanf("%d", &n);

    int arr[n + 1]; // extra space for new element
    printf("Input %d elements in the array:\n", n);
    for (int i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    printf("The current list of the array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    int newValue, pos;
    printf("\nInput the value to be inserted: ");
    scanf("%d", &newValue);
    printf("Input the Position, where the value to be inserted: ");
    scanf("%d", &pos);

    // Shift elements to the right
    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = newValue;

    printf("After Insert the element the new list is: ");
    for (int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
