//program to   find  a factor  of a given number
#include<stdio.h>
int main()
{
int i=1, a;
printf("enter the no:");
scanf("%d", &a);
printf("thr factor of no is:");
for (  i; (i<=a);i++)
  {
     if(a%i==0)
    {
       printf("%d,", i);
    }
  }
return 0;
} 
