#include<stdio.h>
void main()
{
int incoming,outgoing,bucksize,n,store=0,drop;
printf("Enter number of packets\n");
scanf("%d",&n);
printf("Enter Bucket_size,Outgoing rate\n");
scanf("%d%d",&bucksize,&outgoing);
while(n!=0)
{
printf("\nEnter Incoming Rate\n");
scanf("%d",&incoming);
if(incoming<=(bucksize-store))
{
store+=incoming;
printf("Incoming Packet value= %d",incoming);
printf("\nStored value= %d",store);
printf("\noutgoing value= %d",outgoing);
}
else
{
drop=incoming-(bucksize-store);
store=bucksize;
printf("Dropped packets are: %d",drop);
printf("\nStored value= %d",store);
printf("\noutgoing value= %d",outgoing);
}
store=store-outgoing;
n--;
}
}
