//find second largest element in an array..
#include<stdio.h>
int main ()
{
int  a[100],n;
printf("Enter element:");
scanf("%d",&n);
for (int i=0;i<n;i++)
  {
  printf("enter  element:");
  scanf("%d",&a[i]);
  }
int largest=a[0];
int second=a[1];
if (largest<second)
    {
     largest=a[1];
     second=a[0];
    }
for (int i=0;i<n;i++)
   {
    if (a[i]>largest)
     {
       second =largest;
       largest=a[i];
     }
    else  if (a[i]>second && a[i]!=largest)
       {
          second=a[i];
       }
     }
printf("second largest =%d",second);
return 0;
}     
