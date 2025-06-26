#include<stdio.h>
void main()
{
    int a=5,b=7;
    int *p=&a;
    int *q=&b;
    printf("%d",*p+*q);
    printf("\n%d",*p<=*q);
     printf("\n%d",*p>=*q);
      printf("\n%d",*p==*q);
       printf("\n%d",*p!=*q);
        printf("\n%d",p-q);
         printf("\n%u",&q);
         printf("\n%u",a+q);
          printf("\n%d",p--);
           printf("\n%d",p++);
            printf("\n%d",p-2);
    
}