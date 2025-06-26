//raise the base to the power of exponent using a while loop
#include<stdio.h>
int main()
{
    int base, exp, result = 1;
    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exp);
    while(exp > 0)
    {
        result *= base;
        exp--;
    }
    printf("Result: %d\n", result);
    return 0;
}