#include<stdio.h>
void main()
{
    int si;
    scanf("%d",&si);
    if(si<=0) return;
    int arr[si];
    for(int i=0;i<si;scanf("%d",&arr[i++]));
    for(int i=0;i<si;printf("%d ",arr[i++]));
}