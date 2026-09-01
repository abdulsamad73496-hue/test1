//program to find sum of series..
#include<stdio.h>
int main ()
{
int  n;
float sum=0;
printf("enter nth term:");
scanf("%d", &n);
for (int i=1;(i<=n);i++)
    {
     sum=sum+(2.0*i)/(4*i-1);
     }
printf("%.1f",sum);
return 0;
}
