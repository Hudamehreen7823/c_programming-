#include<stdio.h>
void main()
{

int a,b,c,sum;
float avg;
printf("enter a,b,c values\n");
scanf("%d%d%d",&a,&b,&c);
sum=a+b+c;
printf("sum=%d\n",sum);
avg=sum/3;
printf("avg=%f",avg);
}