#include <stdio.h>
#include <stdlib.h>
int main()
{
 int *arr;
 int n,i;
 int sum = 0;
 printf("enter number of elements:");
 scanf("%d", &n);
 arr = (int*) malloc(n*sizeof(int));
 for(i = 0; i < n; i++)
 {
 scanf("%d", (arr+i));
 }
 for(i = 0; i < n; i++)
 {
 sum += arr[i]; //sum=sum+arr[i];
 }
 printf("sum=%d", sum);
}