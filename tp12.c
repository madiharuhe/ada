#include<stdio.h>
int a,b,u,v,i,j,n,ne=1;
int visited [10],min,mincost=0,cost[10][10];
int main()
{
printf("Ente the No. of Vertices\n");
scanf("%d",&n);
printf("Enter the adjacent matrix\n");
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
{
scanf("%d",&cost[i][j]);
if (cost[i][j] == 0)
cost[i][j] = 999;
}
for (i=2;i<=n;i++)
visited[i] = 0;
printf("\n Edges of Spanning Tree ...\n");
visited[1]=1;
while (ne < n)
{
for(i=1,min=999;i<=n;i++)
for (j=1;j<=n;j++)
if (cost[i][j] < min)
if (visited[i] == 0)
continue;
else
{
min = cost[i][j];
a=u=i;
b=v=j;
}
if (visited[u] == 0 || visited[v] == 0)
{
ne++;
printf("\n %d Edge \t (%d, %d) =
%d",ne,a,b,min);
mincost+=min;
visited[b] = 1;
}
cost[a][b] = cost [b][a] = 999;
}
printf("\n Minimum cost = %d",mincost);
}
