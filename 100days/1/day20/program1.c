//program to find  the product of odd digit of a number..
#include<stdio.h>
int main()
{
int n1,n2,n3=1;
printf("enter n:  ");
scanf("%d", &n1);
while (n1>0)
  {
    n2=n1%10;
    n1=n1/10;
if(n2%2!=0)
{
    n3=n3*n2;
 }}
if (n3==1)
   {
    printf("The product of odd digit is =1");
    }
else
  {
   printf("The product of odd digit is %d",n3);} 
return 0;
}


