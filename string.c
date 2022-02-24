#include<stdio.h>
#include<string.h>
int main()
{
char a[20],b[20];
printf("Enter the first Strings");
scanf("%s",a);
printf("Enter the second string");
scanf("%s",b);
printf("Concatination of two Strings are:");
strcat(a,b);
printf("%s",a);
return 0;
}

