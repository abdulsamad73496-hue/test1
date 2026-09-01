//program  to  check  if a number  is a strong number..
#include<stdio.h>
int main()
{
int n,a,b=1,c,sum=0 ;
printf("enter n::");
scanf("%d", &n);
n=c;
while (n>0)
    { a=n%10;
      n=n/10;
      for (int i=1;(i<=a) ;i++)
          { b=b*i;}
    sum=sum+b;
    }
if (sum==c)
{printf("it is a strong number");}
else
  {printf("it is not strong number");}
return 0;
}
