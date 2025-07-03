//print 1 to n using do while loop where n  entered by user
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int i = 1; 
    do {
        printf("%d ", i);
        i++; 
    } while (i <= n);
    printf("\n");
    return 0;
}