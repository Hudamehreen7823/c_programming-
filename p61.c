//rotation of number(sir)
#include<stdio.h>
int scan();
int largest_10_power(int n);
int l_rotate(int n);
int main()
{
    int res=l_rotate(scan());
    printf("%d\n",res);
}
int scan()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    return n;
}
int largest_10_power(int n)
{
    int i, den = 1;
    while((n / den) >9)
    
    {
        den *= 10;
    }
    return den;
}
int l_rotate(int n)
{   
    int den = largest_10_power(n);
    int left = n / den;
    int right = n % den;
    return (right * 10 + left);
}