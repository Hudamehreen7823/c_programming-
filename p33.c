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
            if(row == col || row+col==n+1)
                printf("*");
            else
            printf(" ");
        }
    printf("\n");
    }
    return 0;
}