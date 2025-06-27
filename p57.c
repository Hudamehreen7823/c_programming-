//take 2 int values and print the result
#include<stdio.h>
int scan();
void process();
void result(int n1, int n2);
int main()
{   process();
}
void process()
{
    int n1=scan(),n2=scan();
    result(n1, n2);
}
int scan()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    return n;
 
}
void result(int n1, int n2)
{
    printf("results %d",(n1 + n2));
}
