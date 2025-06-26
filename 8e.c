#include<stdio.h>
#include<string.h>
void main()
{
    int i, len=0;
char a[10]="huda";
printf("huda");
for(i=0;a[i]!= '\0';i++)
{
    len++;
}
for(i=len-1;i>=0;i--)
printf("%c",a[i]);

}