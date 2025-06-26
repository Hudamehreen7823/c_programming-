
#include <stdio.h>
#include<stdlib.h>
void main()
{
 int *ptr,i,n;
 printf("enter n:");
 scanf("%d",&n);
 ptr=(int *)malloc(n*sizeof(int));
 printf("\nenter %d elements:",n);
 for(i=0;i<n;i++)
 {
 scanf("%d",ptr+i);
 }
 printf("\nthe elements are:");
 for(i=0;i<n;i++)
 {
 printf("\n%d",*(ptr+i));
 }
 printf("\nnow reallocate:");
 ptr=realloc(ptr,(n-2)*sizeof(int));
 printf("\nthe elements are:");
 for(i=0;i<n-2;i++)
 {
 printf("\n%d",*(ptr+i));
 }
 printf("\nnow deallocate:");
 free(ptr);
 printf("\nelements are:");
 for(i=0;i<n-2;i++)
 {
 printf("\n%d",*(ptr+i));
 }
}