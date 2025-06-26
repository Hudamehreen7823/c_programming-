#include <stdio.h>
int fact(int z); /* Function Prototype */
int main()
{
 int N,R,NCR;
 printf("Enter the value for N and R \n");
 scanf("%d%d",&N,&R);
 NCR=fact(N)/(fact(R)*fact(N-R)); /* Function Call */
 printf("The value of NCR is:%d",NCR);
}
/* Function Definition */
int fact(int z)
{
 int f=1,i;
 if(z==0)
 {
 return(f);
 }
 else
 {
 for(i=1;i<=z;i++)
 {
 f=f*i;
 }
 }
 return(f);
}
