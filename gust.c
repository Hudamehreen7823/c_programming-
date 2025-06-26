#include <stdio.h>
int main()
{
 int mat1[5][5],mat2[5][5],r1,c1,r2,c2,i,j,mul[5][5],k;
 printf("enter size of mat1:");
 scanf("%d%d",&r1,&c1);
 printf("enter size of mat2:");
 scanf("%d%d",&r2,&c2);
 printf("enter mat1 elements:\n");
 for(i=0;i<r1;i++)
 {
 for(j=0;j<c1;j++)
 {
 scanf("%d",&mat1[i][j]);
 }
 }
 printf("enter mat2 elements:\n");
 for(i=0;i<r2;i++)
 {
 for(j=0;j<c2;j++)
 {
 scanf("%d",&mat2[i][j]);
 }
 }
 printf("mat1 elements:\n");
 for(i=0;i<r1;i++)
 {
 for(j=0;j<c1;j++)
 {
 printf("%d",mat1[i][j]);
 }
 printf("\n");
 }
 printf("mat2 elements:\n");
 for(i=0;i<r2;i++)
 {
 for(j=0;j<c2;j++)
 {
 printf("%d",mat2[i][j]);
 }
 printf("\n");
 }
 if(c1==r2)
 {
 for(i=0;i<r1;i++)
 {
 for(j=0;j<c2;j++)
 {
 mul[i][j]=0;
 for(k=0;k<r1;k++)
 {
 mul[i][j]=mul[i][j]+mat1[i][k]*mat2[k][j];
 }
 }
 }
 printf("matrix multiplication:\n");
 for(i=0;i<r1;i++)
 {
 for(j=0;j<c2;j++)
 {
 printf("\t%d",mul[i][j]);
 }
 printf("\n");
 }
 }
 else
 {
 printf("multiplication is not possible");
 } 
 return 0;
}