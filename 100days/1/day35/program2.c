//rotate an array by k postion.
#include<stdio.h>
int main ()
{
int a[100],n,b[100];
printf("enter the element:");
scanf("%d",&n);
for (int i=0;i<n;i++)
   {
    printf("enter element:");
    scanf("%d",&a[i]);
       }
int k;
printf("enter  value of index  k to rotate:");
scanf("%d",&k);
int r=0;
for (int i=n-k;i<n;i++)
    {
        b[r]=a[i];
        a[i]=0;
        r=r+1;
       }
for (int i=0;i<n-k;i++)
    {
     int s=k+i;
     b[s]=a[i];
     a[i]=0;
     }
printf("After rotate the element:");
for (int i=0;i<n;i++)
   {
    a[i]=b[i];
    printf("%d," ,a[i]);
    }
return 0;
}
