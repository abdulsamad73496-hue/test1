//Delete  an element  from an array..
#include<stdio.h>
int main ()
{
int a[100],n1,e;
printf("enter no of element:");
scanf("%d",&n1);
for (int i=0;i<n1;i++)
   {printf("enter element:");
    scanf("%d", &a[i]);}
printf("enter the index of element that you want to delete ");
scanf("%d", &e);
a[e]=0;
int i=e; 
for (;i<n1-1;i++)
    {
      a[i]=a[i+1];
      a[i+1]=0;
    }
n1=n1-1;
printf("after delete\n ");
for (int i=0;i<n1;i++)
    {
      printf("%d,",a[i]);
     }
return 0;
}
 
