//to find number of digits in a number 
#include <stdio.h>
int main()
{
    int n, count = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n == 0) {
          count = 1;
       
    } 
    else 
    {
        while (n != 0) {
            n /= 10;
            count++; 
        }
    }
    printf("Number of digits: %d\n", count);
    return 0;
}