//a function to reverse an int number
#include <stdio.h>
int scan()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    return n;
}
int reverse(int n) {
    int rev= 0;
    while (n ) {
        int rem=n%10;
        n /= 10;
        rev=rev*10+rem;
    }
    return rev;
}
int main()
{
    int result = reverse(scan());
    printf("Reversed number is %d\n", result);
    return 0;
}