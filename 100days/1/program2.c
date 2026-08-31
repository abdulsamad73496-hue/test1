//program to check no is perfect or not..
#include<stdio.h>
int main()
{
int n,i=1,sum=0;
printf("enter n");
scanf("%d", &n);
for ( i;(i<n);i++)
   {
    if (n%i==0)
       {
        sum=sum+i;
        }
    }
if (sum==n)
   {
    printf(" perfect no");
    }
else 
   {
    printf("imperfect no");
    }
return 0;
}
