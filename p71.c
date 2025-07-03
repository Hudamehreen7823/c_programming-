//code to print nth fibonacci number using recursion
#include <stdio.h>
int fibonacci(int n) {
    
    if (n <= 1) return n; 
    return fibonacci(n - 1) + fibonacci(n - 2);
}
int scan() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    return n;
}
int main() 
{
    int n = scan();
    int result = fibonacci(n-1);// Adjusting for 0-based index
    printf("Fibonacci of %d is %d\n", n, result);
    return 0;
}