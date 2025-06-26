#include<stdio.h>
int slength(char s[30]);
int main()

{
char s[30];
int i,len=0;
printf("eter strig");
gets(s);
len=slength(s);
printf("legth=%d",len);
return 0;

}
int slength(char s[30])
{
int i,len=0;
for(i=0;s[i]!='\0';i++)
{

    len++;
}
return(len);
}