//product of first n natural numbers using while loop
#include <stdio.h>
int main() 
{
    int n,i = 1;
    double product = 1.0; 
    printf("Enter a number: ");
    scanf("%d", &n);
    while (i <= n) 
    {
        product *= i++;

    }
    printf("Product of first %d natural numbers is: %d\n", n, product);
    return 0;
}