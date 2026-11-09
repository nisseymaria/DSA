#include<stdio.h>
#define INF 999
void main()
{
int n,i,j,adj[10][10],tot=0,no_edge=0;
int visited[10]={0,0,0,0,0,0,0,0,0,0};
printf("\n Enter the no. of vertices");
scanf("%d",&n);
printf("\n Enter the adjacency matrix");
for(i=1;i<=n;i++)
{ 
	for(j=1;j<=n;j++)
	{
	scanf("%d",&adj[i][j]);
	if(adj[i][j]==0)
	adj[i][j]==INF;
	}
}
visite[1]=1;
printf("\n The edges of spanning tree are:")
while(no_edge<n-1)
{
int min=INF;
int a=0,b=0;
for(i=1;i<=n;i++)
{
	if(visited[i]==1)
	{
	   for(j=1;j<=n;j++)
	      {
	        if((adj[i][j]!=INF)&&visited[j]==0)
	         {
	          if(adj[i][j]<min)
	          {
	          min=adj[i][j];
	          a=i;
	          b=j;
	          }
	         }
	      }
	}
}
printf("\n edge %d->%d cost=%d",a,b,min);
no_edge++;
visited[b]=1
tot=tot+min
}
printf("\n Total=%d",tot);
}
