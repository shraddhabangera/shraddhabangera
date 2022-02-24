#include<stdio.h>
int a[10][10],n;
int min(int a,int b)
{
return a<b?a:b;
}
void dist()
{
int i,j,k;
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
for(k=1;k<=n;k++)
{
a[i][j]=min(a[i][j],a[i][k]+a[k][j]);
}
}
}
}
int main()
{
int i,j;
printf("Enter the nodes\n");
scanf("%d",&n);
printf("Enter the matrix value\n");
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
scanf("%d",&a[i][j]);

if(a[i][j]==0)
a[i][j]=999;
if(i==j)
a[i][j]=0;
}
}
dist();
printf("Division Vector is\n");
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
printf("%2d",a[i][j]);
}
printf("\n");
}
return 0;
}

