//passby value and passby reference,swapping two numbers usinf functions
#include<stdio.h>
int scan()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    return n;
}
void swap(int a,int b)
{
    int temp=a;
        a=b;
        b=temp;
    printf(" in function a=%d b=%d\n",a,b);
}
int main()
{
    int n1=scan(),n2=scan();
    swap(n1,n2);
    printf("in main: a=%d b=%d\n",n1,n2);
    return 0;
}