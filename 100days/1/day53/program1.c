#include<stdio.h>
int main ()
{
int n;
printf("How many integr you have to input:");
scanf("%d", &n);
int a[n];
printf("enter element\n");
for (int i=0;i<n;i++)
    {
     scanf("%d,", &a[i]);
     }
int x,sum1=0,sum2=0;
printf("Enter where you want to do pivot index process:");
scanf("%d", &x);
for (int i=0;i<=x;i++)
    { sum1=sum1+a[i];}
for (int i=x;i<n;i++)
    {sum2=sum2+a[i];}
if (sum1==sum2)
   {printf("%d",x);}
else 
    {printf("%d", -1);}
return 0;
}
    
