//sum of n natural numbers using while loop
#include <stdio.h>
int main() 
{
    int n, sum = 0, i = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (i <= n) 
    {
        sum += i++;
    }
    printf("Sum of first %d natural numbers is: %d\n", n, sum);
    return 0;
}