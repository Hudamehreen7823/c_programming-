//rotation of number(sir)
#include<stdio.h>
#include<math.h>
int scan();
int largest_10_power(int n);
int l_rotate(int n);
int circular_prime(int n);
int is_prime(int n);
int main()
{
    int res=circular_prime(scan());
    printf(res?"circular prime\n":"not a circular prime\n");
    return 0;

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
int circular_prime(int n) 
{
    int nod=log10(n) + 1; 
    for(int i = 0; i < nod; i++) 
    {
        if(!is_prime(n)) 
        {
            n = l_rotate(n);
        }
        else
        {
            return 0; 
        }
    
    }
    return 1;
}
int is_prime(int n)
{
    if(n<=1) return 0;
    if(n%2==0)return n==2;
    for(int i=3;i<=sqrt(n);i+=2)
    {
        if(n%i==0) return 0;
    }
    return 1;
}