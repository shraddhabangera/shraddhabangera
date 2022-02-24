#include<stdio.h>
void main()
{
int a[10],i,j,n,temp=0;
printf("Enter the limit\n");
scanf("%d",&n);
printf("Enter the elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
{
for(j=0;j<n-i-1;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
printf("Sorted elements are\n");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
printf("\n");
}
