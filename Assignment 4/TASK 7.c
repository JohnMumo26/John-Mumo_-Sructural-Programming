#include <stdio.h>
#define BUFFER_SIZE 5

int buffer[BUFFER_SIZE];
int head = 0, tail = 0;
int count = 0;

void insert(int value) {
    buffer[tail] = value;
    tail = (tail + 1) % BUFFER_SIZE;
    if (count < BUFFER_SIZE) {
        count++;
    } else {
        head = (head + 1) % BUFFER_SIZE;
    }
}

void printBuffer() {
    printf("Buffer (oldest to newest): ");
    for (int i = 0; i < count; i++) {
        int idx = (head + i) % BUFFER_SIZE;
        printf("%d ", buffer[idx]);
    }
    printf("\n");
}

int main() {
    int value, choice;

    printf("Circular Data Logger (Buffer size = %d)\n", BUFFER_SIZE);
    printf("1. Insert value\n2. Print buffer\n3. Exit\n");

    do {
        printf("\nEnter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter value: ");
            scanf("%d", &value);
            insert(value);
            printf("Value %d inserted.\n", value);
        } else if (choice == 2) {
            printBuffer();
        }
    } while (choice != 3);

    return 0;
}
