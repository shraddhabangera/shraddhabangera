#include<stdio.h>
int cost[10][10],n,d[10],p[10];
void dijkstras(int src)
{
int s[10],i,u,min,j,v;
for(i=0;i<n;i++)
{
s[i]=0;

p[i]=src;
d[i]=cost[src][i];

}
s[src]=1;
for(i=1;i<n;i++)
{
min=99;
u=-1;
for(j=0;j<n;j++)
{
if(s[j]==0)
if(d[j]<min)
{
min=d[j];
u=j;
}
}
if(u==-1)
return;
s[u]=1;
for(v=0;v<n;v++)
{
if(s[v]==0)
if(d[u]+cost[u][v]<d[v])
{
d[v]=d[u]+cost[u][v];
p[v]=u;
}
}
}
}
void print_path(int src,int dest)
{
int i;
i=dest;
while(i!=src)
{
printf("%d<--",i);
i=p[i];
}
printf("%d=%d",i,d[dest]);
}
void main()
{
int src,i,j;
printf("Enter the number of vertices\n");
scanf("%d",&n);
printf("Enter the matrix value\n");
for(i=0;i<n;i++)
for(j=0;j<n;j++)
scanf("%d",&cost[i][j]);
printf("\nThe matrix are:\n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
printf("%d\t",cost[i][j]);
printf("\n");
}
printf("Enter the source vertex\n");
scanf("%d",&src);
dijkstras(src);
printf("\nThe shortest path and distance are shown below\n");
for(j=0;j<n;j++)
{
print_path(src,j);
printf("\n");
}
}
