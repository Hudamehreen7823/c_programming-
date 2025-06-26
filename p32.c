//pattern hallow square
#include <stdio.h>
int main() 
{
    int n;
    printf("Enter the number of lines: ");
    scanf("%d", &n);
    for (int row = 1; row <= n; row++) 
    {   for (int col = 1; col <= n; col++) 
        {
            if((row == 1 || row == n) || (col == 1 || col == n))
                printf("*");
            else
            printf(" ");
        }
    printf("\n");
    }
    return 0;
}