#include <stdio.h>

int main() {
    int rows, i, j, space;

    printf("Enter the number of rows for the sandglass: ");
    scanf("%d", &rows);

    // Upper part of the sandglass (inverted pyramid)
    for (i = 1; i <= rows; i++) {
        // Print leading spaces
        for (space = 1; space < i; space++) {
            printf(" ");
        }
        // Print numbers
        for (j = i; j <= rows; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    // Lower part of the sandglass (regular pyramid)
    for (i = rows - 1; i >= 1; i--) {
        // Print leading spaces
        for (space = 1; space < i; space++) {
            printf(" ");
        }
        // Print numbers
        for (j = i; j <= rows; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}