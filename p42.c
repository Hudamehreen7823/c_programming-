//left inclined  triangle star pattern
#include <stdio.h>
int main() 
{
    int n;
    printf("Enter the number of lines: ");
    scanf("%d", &n);
    for (int row = 1; row <= n; row++,printf("\n")) 
    {
        for (int space = 1; space < row; space++) 
        {
            printf(" ");
        }
        for (int col = 1; col <= row; col++) 
        {
            printf("*");
        }
    }

    return 0;
}
