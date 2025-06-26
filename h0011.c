#include<stdio.h>
void main()
{

    char a[10]="huda";
    int n,i,count=0;
   // for(i=0;a[i]!='\0';i++);
   while(a[i]!='\0')
    {
        i++;
    count++;
    }
   printf("string length is %d",count);
}