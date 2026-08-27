//program to check number is armstrong or not 
#include<stdio.h>
int main()
{
int n,reverse=0,cube,a;
printf("enter the n:");
scanf("%d",  &n);
n=a;
while (n>0)
   {
    cube=n%10;
    reverse=cube*cube*cube+reverse;
    n=n/10;}
if (a==reverse)
  {printf("the number  is armstrong");}
else
   {printf("the number is not armstrong");}
return 0 ;
}
