#include <stdio.h>
int mystrlen(char s[30]); /* Function Prototype */
int main()
{
 char s[30];
 int i,length;
 printf("Enter a string: ");
 gets(s);
 length=mystrlen(s); /* Function Call */
 printf("Length of string:%d",length);
 return 0;
}
/* Function Definition */
int mystrlen(char s[30])
{
 int i,length=0;
 for(i=0;s[i]!='\0';i++)
 {
 length++;
 }
 return(length);
}

