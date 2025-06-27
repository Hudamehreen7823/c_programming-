//write a code to check give number is circular prime or not
//cicular prime:if each and every rotation of a number is prime then it is called circular prime
#include <stdio.h>
int is_prime(int n)
 {
    if (n <= 1) return 0; 
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}
int largest_10_power(int n) {
    int den = 1;
    while ((n / den) > 9) {
        den *= 10; 
    }
    return den;
}
int rotate(int n) {
    int den = largest_10_power(n);
    int left = n / den; 
    int right = n % den; 
    return (right * 10 + left); 
}
int is_circular_prime(int n) {
    int original = n;
    do {
        if (!is_prime(n)) return 0; 
        n = rotate(n);
    } while (n != original); 
    return 1; 
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    if (is_circular_prime(n)) {
        printf("%d is a circular prime.\n", n);
    } else {
        printf("%d is not a circular prime.\n", n);
    }
    
    return 0;
}