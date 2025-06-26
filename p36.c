//parlellogram left tilting
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of lines: ");
    scanf("%d", &n);
    for (int row = 1; row <= n; row++) 
    {   
        for (int space = 1; space < row; space++) 
        {
            printf(" ");
        }
        for (int col = 1; col <= n; col++) 
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}