//a function to check a value is prime or not .if prime function should return 1 otherwise  return 0 and 
#include<stdio.h>
#include<math.h>
int scan();
int isPrime(int n);
int main()
{
    int n = scan();
    if(isPrime(n))
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);
    return 0;
}
int scan()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    return n;
}
int isPrime(int n)
{/*
    if(n <= 1) return 0;
    for(int i = 2; i * i <= n; i++) 
    {
        if(n % i == 0) return 0; 
    }
    return 1; 
    */
   if(n <= 1) return 0;
   int count=0;
    for(int i = 2; i<=sqrt(n); i++) 
    {
        if(n % i == 0) 
        {
            count++;
            break;
        } 
    }
    return (count == 0 )? 1 : 0;

}