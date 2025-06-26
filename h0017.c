#include <stdio.h>
#include<string.h>
void countCharacters(const char *str, int *lowercase, int *uppercase, int *digits, int *others) 
{
 while (*str != '\0') 
 {
 if (*str >= 'a' && *str <= 'z') 
 {
 (*lowercase)++;
 } 
 else if (*str >= 'A' && *str <= 'Z')
 {
 (*uppercase)++;
 } 
 else if (*str >= '0' && *str <= '9') 
 {
 (*digits)++;
 } 
 else 
 {
 (*others)++;
 }
 str++;
 }
}
int main() 
{
 char inputString[100];
 int lowercase = 0, uppercase = 0, digits = 0, others = 0;
 printf("Enter a string: ");
 fgets(inputString, sizeof(inputString), stdin);
 // Remove the newline character from inputString if present
 if (inputString[strlen(inputString) - 1] == '\n') 
 {
 inputString[strlen(inputString) - 1] = '\0';
 }
 countCharacters(inputString, &lowercase, &uppercase, &digits, &others);
 printf("Number of lowercase characters: %d\n", lowercase);
 printf("Number of uppercase characters: %d\n", uppercase);
 printf("Number of digits: %d\n", digits);
 printf("Number of other characters: %d\n", others);
 return 0;
}
