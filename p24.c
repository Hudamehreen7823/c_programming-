//check wether the given number is armstrong or not
//armstrong:each digit is raised to the power of number of digits and the sum is equal to the initial number
//example:153=1^3+5^3+3^3
#include <stdio.h>
#include <math.h>
int main() 
{
    int num,safe,nod,sum=0;
    printf("enter num:");
    scanf("%d",&num);
    safe=num;
    nod=log10(num)+1; 
    while(num>0)
    {
        int dig=num%10;
        num/=10;
        int exp=nod;
        int sol=1;
        while(exp>0)
        {
            sol*=dig;
            exp--;
        }
        sum+=sol;
    }
printf((sum==safe)?"armstrong":"not armstrong");
    return 0;
}