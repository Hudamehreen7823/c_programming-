#include<stdio.h>
#include<math.h>
int main()
{
    int n,dig;
    printf("Enter a number: ");
    scanf("%d", &n);
    dig = (int)log10(n) + 1; 
    printf("Number of digits: %d\n", dig);
}