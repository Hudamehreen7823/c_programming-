#include<stdio.h>
int main()
{
   int denom=1,n;
   printf("enter a number:");
   scanf("%d",&n);
   while((n/denom)>9)
   {
         denom*=10;
   }
   printf("denominator is %d\n",denom);
    return 0;
}