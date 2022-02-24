#include<stdio.h>
int main()
{
int a[10],i,j,n,temp,max;
printf("Enter the limit\n");
scanf("%d",&n);
printf("Enter the limit\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
max=i;
for(j=i+1;j<n;j++)
{
if(a[j]>a[max])
{
max=j;
}
}
if(max!=i)
{
temp=a[i];
a[i]=a[max];
a[max]=temp;
}
}
printf("Sorted elements are\n");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
return 0;
}
