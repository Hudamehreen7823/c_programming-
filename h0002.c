#include<stdio.h>
void main()
{

    int i,j,n;
    printf("enter n value:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }

}