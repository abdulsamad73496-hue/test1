
//program to  swap  the frist  and last digit  of a number..
#include<stdio.h>
int main()
{ 
int a,b,c,d, count=1,n,n1=1;
printf("enter n");
scanf("%d", &n);
a=n%10;
n=n/10;
c=n;
while (n!=0)
    {
     b=n%10;
     count=count*10;
     n=n/10;
     }
count=count/10;
c=c-count*b;
c=c*10+b;
d=c;
while (d!=0)
   {
   d=d/10;
   n1=n1*10;
   }
c=c+n1*a;
printf ("number after swap the frist and last digit:%d",c);
return 0;
}
