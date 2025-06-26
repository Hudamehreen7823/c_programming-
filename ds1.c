#include<stdio.h>


void sort(int[],int);

main()
{
	int k[10],n,i;
	printf("\nEnter How Many Elements=");
	scanf("%d",&n);
	printf("\nEnter %d Elements For Sorting=",n);
	for(i=1;i<=n;i++)
	scanf("%d",&k[i]);
	printf("\nBefore Sorting Array Elements Are=\n");
	for(i=1;i<=n;i++)
	printf("\t%d",k[i]);
	sort(k,n);
	printf("\nAfter Sorting Array Elements Are=\n");
	for(i=1;i<=n;i++)
	printf("\t%d",k[i]);
}

void sort(int k[10],int n)
{
	int i,j,temp,MinIndex;
	for(i=1;i<=n-1;i++)
	{
		MinIndex=i;
		for(j=i+1;j<=n;j++)
		{
			if(k[j]<k[MinIndex])
			MinIndex=j;
		}
		if(MinIndex!=i)
		{
			temp=k[i];
			k[i]=k[MinIndex];
			k[MinIndex]=temp;
		}
	}
	return;
}




