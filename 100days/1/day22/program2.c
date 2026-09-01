//progrma to find sum of the serise ..
#include<stdio.h>
int main ()
{
int n ;
float sum=0;
printf("enter n::");
scanf("%d" , &n);
if (n==0)
  {
     printf("sum=0");
     return 0;
   }
else if (n==1)
  {printf("sum=1");
   return 0;
  }
else 
    {
      for (int i=1;(i<=n);i++)
        { 
       sum=sum+(2*i-1.0)/(2*i);
         }
        }
sum =sum+1;
printf("%.1f",sum);
return 0;
}
