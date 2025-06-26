//10 stars in 10 lines using forloop
#include <stdio.h>
int main() 
{
    int n;
    printf("Enter the number of lines: ");
    scanf("%d", &n);
    for (int row = 1; row <= n; row++) 
    {
        for (int col = 1; col <= 10; col++) 
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}