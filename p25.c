//to check the number is strong number or not using nested while loop
//strong number:the sum of the factorial of each digit is equal to the initial number
//example:145=1!+4!+5!
#include <stdio.h>
#include <math.h>
int main()
{
int num, safe, sum = 0,start=1,fact=1;
printf("Enter a number: ");
scanf("%d", &num);
safe = num;
while (num > 0)
{
    int dig = num % 10;
    fact = 1;
    start = 1; 
    while (start <= dig)
    {
        fact *= start;
        start++;
    }
    sum += fact;
    num/=10;
}
printf( (safe==sum) ? "Strong number" : "Not a strong number");
return 0;
}