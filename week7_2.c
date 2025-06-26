#include <stdio.h>
int main()
{
   int a[10],n,i,search;
   printf("enter n:");
   scanf("%d",&n);
   printf("enter array elements:\n");
   for(i=0;i<n;i++)
   {
       printf("a[%d]=",i);
       scanf("%d",&a[i]);
   }
   printf("enter search element:");
   scanf("%d",&search);
   for(i=0;i<n;i++)
   {
        if(search==a[i])
        {
             printf("search element found at %d pos",i);
             break;
        }   
   }
   if(i==n)
    printf("search element not found");
    return 0;
}
