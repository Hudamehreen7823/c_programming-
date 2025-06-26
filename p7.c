#include<stdio.h>
int main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    /*c |= 32; 
    switch(c)
    {
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
printf("Vowel\n");
break;
default:
printf("Consonant\n");
    }
*/
switch(c)
{
    case 'a' ... 'z':
    printf("lowercase\n");
    break;
    case 'A' ... 'Z':   
    printf("uppercase\n");
    break;
    case '0' ... '9':
    printf("digit\n");
    break;
    default:
    printf("special character\n");
    break;
}
    return 0;
}