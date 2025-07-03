//print n to 1 using recursion in reverse order
#include<stdio.h>
void printnum(int n, int i) 
{
    if (i > n) return;
    printnum(n, i + 1);
    printf("%d ", i);
}
int scan()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    return n;
}
int main() 
{
    int n = scan();
    printnum(n, 1);
    return 0;
}
