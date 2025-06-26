#include<stdio.h>
void trans(int a[10][10],int m,int n,int i,int j)
{
printf("after transpose\n");
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        printf("%d\t",a[j][i]);
    }
printf("\n");
}

}

void main()
{

int a[10][10];
int i,j,m,n;
printf("enter the number of rows and columns\n");
scanf("%d%d",&m,&n);
printf("enter elemets of matrix\n");
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        scanf("%d",&a[i][j]);
    }
printf("\n");
}
printf("elements are\n");
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        printf("%d\t",a[i][j]);
    }
printf("\n");
}
trans(a,m,n,i,j);
}
