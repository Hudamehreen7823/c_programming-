//to find factorial of a number using fact function (int) user ip
#include<stdio.h>
int fact(int);
int scan();
int main()
{

    int result=fact(scan());
    printf("Factorial is %d\n", result);
}
int scan()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    return n;
 
}
int fact(int n)
{
    /*if(n == 0 || n == 1)
        return 1;
    else
        return n * fact(n - 1);*/
        int factorial = 1;
        for(int i = 1; i <= n; i++)
        {
            factorial *= i;
        }
        return factorial;
}