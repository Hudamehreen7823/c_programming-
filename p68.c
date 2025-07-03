//printing 1 to n using while loop.recursion function
#include<stdio.h>
/*int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int i = 1;
    while (i <= n) {
        printf("%d ", i);
        i++;
    }
    printf("\n");
    return 0;
}*/
void printnum(int n, int i) 
{
    if (i > n) return;
    printf("%d ", i);
    printnum(n, i + 1);
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