//program to check  a prime no
#include<stdio.h>
int main()
{int n,i=2,a=0 ;
printf("enter the no:");
scanf("%d" ,&n);
if (n<=1)
   {printf("the no is not prime");}
else
   { 
       for (int i=2;(i<n);i++)
          {       
           if (n%i==0)
              {  a=a+1;}
      }
if ( a==0)
    {printf("the no is prime");}
else
   {printf("the no is composite");}
   }
return 0 ;
}
