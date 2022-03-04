#include<stdio.h>
int a[10],i,j,n,temp,min;
void selection()
{
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
}
void main()
{
printf("Enter the limit\n");
scanf("%d",&n);
printf("Enter the elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
selection();
printf("Sorted elements are\n");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
printf("\n");
}
