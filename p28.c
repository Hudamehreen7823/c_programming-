//multiples of a number ex:20:1*20,2*10,3*6,4*5,5*4
#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) 
    {
        if (n % i == 0)
        {
            printf("%d * %d = %d\n", i, n / i, n); 
        }
    }
    return 0;
}
