//program to print the sum of  the frist n odd numbers.
#include<stdio.h>
int main()
{
int i=1,n,sum=0;
printf("enter the  value of n:  ");
scanf("%d", &n);
while (i<=n)
    {sum=sum+i;
      i=i+2;}
printf("Sum of odd number is: %d" , sum);
return 0 ;
} 

