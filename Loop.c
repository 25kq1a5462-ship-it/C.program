#include<stdio.h>
intmain()
{
 int i,a[5],n;
printf("Enter the no of elements");
scanf("%d",n);
printf("Enter the values:");
for(i=0;i<n;i++)
{
 scanf("%d",a[i]);
}
printf("Entered value");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
return 0;
}
