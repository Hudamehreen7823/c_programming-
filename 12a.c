#include<stdio.h>
int feb(int n)
{
if(n<=1)
{
    return n;
}
else{

    return (feb(n-1)+feb(n-2));
}

}
int main()
{
int n,i;
printf("enter n\n");
scanf("%d",&n);
printf("febbionic series\n");
for(i=0;i<n;i++)
{
    printf("%d\t",feb(i));
}


}