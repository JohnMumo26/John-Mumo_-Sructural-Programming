#include <stdio.h>
#include <stdio.h>
#define ROWS 6
#define COLS 4

int main() {
    int arr[ROWS][COLS];

    // Initialize with example values (row_index * 10 + col_index)
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            arr[i][j] = i * 10 + j;
        }
    }

    printf("2D Array (%d x %d) elements:\n", ROWS, COLS);
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%3d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
