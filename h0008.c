#include<stdio.h>
void main()
{
    char a[10]="liril";
    int i=0,j;
    for(i=0;a[i] !='\0';i++);
    printf("%d",i);
    for(j=i;j>=0;j--)
    printf("%c",a[j]);
    
}