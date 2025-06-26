#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
float principle,rate,time,CI;
printf("enter principle");
scanf("%f",&principle);
printf("enter time");
scanf("%f",&time);
printf("enter rate");
scanf("%f",&rate);
CI=principle*((pow(rate/100),time));
printf("CI=",CI);
return 0;


}