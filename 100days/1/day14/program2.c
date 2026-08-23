//program to print the product of even number from 1 to n.
#include<stdio.h>
int main()
{
int i=2,n,product=1;
printf("enter the value of n: ");
scanf("%d" ,  &n);
while (i<=n)
{   product=product*i;
    i=i+2;}
printf("product of  frist n even no is: %d" ,product);
return 0 ;
}
