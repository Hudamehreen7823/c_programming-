#include<stdio.h>
int main()
{
    int n1;
    printf("Enter a number: ");
    scanf("%d", &n1);
   //printf("%d is %s\n", n1, (n1%2) ? "odd" : "even");
   printf("%d is %s\n", n1, (n1 & 1) ? "odd" : "even");
    return 0;
}