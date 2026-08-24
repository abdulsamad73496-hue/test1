//program to calculate the factorial  of a number.
#include<stdio.h>
int main()
{
int n,i=1,a=1;
printf("enter the value of n:");
scanf("%d", &n);
while (i<=n)
     {
      a=a*i;
      i=i+1;
     }
printf("the factorial of  'n' is :%d",a);
return 0 ;
}
