#include<stdio.h>
int main()
{
    int num=5;
   int res=++num*++num;
   //res=++num++; error
   //res=num++++;error
    //int res=--num + -num; 
    printf("%d",res);
}