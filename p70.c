//find factorial of a number using recursion
#include <stdio.h>
int factorial(int n) 
{
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}
int scan() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    return n;
}
int main() {
    int n = scan();
    int result = factorial(n);
    printf("Factorial of %d is %d\n", n, result);
    return 0;
}