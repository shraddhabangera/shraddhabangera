#include<stdio.h>
void main()
{
int a[10],i,j,n,temp,min;
printf("Enter the limit\n");
scanf("%d",&n);
printf("Enter the elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
{
min=i;
for(j=i+1;j<n;j++)
{
if(a[j]<a[min])
{
min=j;
}
}
if(min!=i)
{
temp=a[i];
a[i]=a[min];
a[min]=temp;
}
}
printf("Sorted elements are\n");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
printf("\n");
}
