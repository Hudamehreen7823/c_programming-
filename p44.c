//solid square  number pattern
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of lines: ");
    scanf("%d", &n);
    for (int row = 1; row <= n; row++) 
    {
        for (int col = 1; col <= n; col++) 
        {
            printf("%d ", col);
            //printf("%d ", row);
        //printf("%d ", row * col);
        }
        printf("\n");
    }
    return 0;
}