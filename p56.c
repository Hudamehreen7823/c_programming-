//write a fuction to take a int as input from console.write a code to take 2 int values as inputs and add and later take two int value and do product it and print the result when the process is done. the input is user defined function  with int return type.
#include<stdio.h>
int scan();
int main()
{
    int n1=scan(),n2=scan();
    printf("%d\n",n1+n2);
    int n3=scan(),n4=scan();
    printf("%d\n",n3*n4);
    return 0;
}
int scan()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    return n;
}