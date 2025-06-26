#include<stdio.h>
void main()
{
int m[2]={100,200};
int a,b,c,*p=m;a=*p;
b=*(p+1);c=(*p+1);
printf("%d   %d    %d",a,b,c);


}