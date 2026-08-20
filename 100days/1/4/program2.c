// program  to find  and sum of the frist  n  natural numbers.
#include<stdio.h>
int  main ()
{
float no;
printf("enter the value of no:");
scanf("%f", &no);
no=(no*(no+1))/2;
printf("sum of the frist n natural number is:%f",no);
return 0 ;
}
