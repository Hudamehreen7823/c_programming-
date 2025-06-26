//largest 10 power which will provide quotient
#include <stdio.h>
int main() {
int num,dig=0,denom=1;
printf("Enter a number: ");
scanf("%d", &num);
while(denom<=num)
{
    denom*=10;
    dig++;
}
printf("Number of digits: %d\n", dig);
return 0;
}