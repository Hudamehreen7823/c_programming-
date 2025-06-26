#include<stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);
   //if(ch>='A'&& ch<='z')
    //ch+=32;
    ch|=32;
    printf("%c", ch);
}