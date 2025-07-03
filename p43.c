//sandglass star pattern
#include <stdio.h>
int main() 
{
    int n;
    printf("Enter the number of lines: ");
    scanf("%d", &n);
    for (int row = n; row >= 1; row--) 
    {
        for (int space = 1; space <= n - row; space++) 
        {
            printf(" ");
        }
        for (int col = 1; col <= 2 * row - 1; col++) 
        {
            printf("*");
        }
        printf("\n");
    }
    for (int row = 2; row <= n; row++) 
    {
        for (int space = 1; space <= n - row; space++) 
        {
            printf(" ");
        }
        for (int col = 1; col <= 2 * row - 1; col++) 
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}