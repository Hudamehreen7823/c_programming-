//solid square alphabet pattern
#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of lines: ");
    scanf("%d", &n);
    for (int row = 1; row <= n; row++) {
        for (int col = 1; col <= n; col++) {
            //printf("%c ", 'A' + col - 1);
            printf("%c ", 'A' + row - 1);
            //printf("%c ", 'A' + (row + col - 2) % 26);
        }
        printf("\n");
    }
    return 0;
}