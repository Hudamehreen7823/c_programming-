#include<stdio.h>
void bfsearch(int,int);
int A[10][10],visited[10],Q[10];
void main()
{
int i,n,j,v1,v2,x;
char ans='y';
printf("\nEnter How Many Vertices=");
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
A[i][j]=0;
}
do
{
printf("\nEnter Vertex V1 and V2=");
scanf("%d%d",&v1,&v2);
if(v1>=n||v2>=n)
printf("\nInvalid Vertices");
else
{
A[v1][v2]=1;
A[v2][v1]=1;
}
printf("\nDo You Want Another Edge(y/n)=");
scanf(" %c",&ans);
}
while(ans=='y');
for(i=0;i<n;i++)
visited[i]=0;
printf("\nEnter the Starting Vertex=");
scanf("%d",&x);
printf("\nBreadth First Traversal Is=");
bfsearch(x,n);
}
void bfsearch(int x,int n)
{
int y,front,rear;
visited[x]=1;
front=-1;
rear=-1;
Q[++rear]=x;
while(front!=rear)
{
x=Q[++front];
printf("\t%d",x);
for(y=0;y<n;y++)
{
if(A[x][y]==1&&visited[y]==0)
{
Q[++rear]=y;
visited[y]=1;
}
}
}
}
