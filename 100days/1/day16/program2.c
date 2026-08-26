//program to  check the number is palindrome
#include<stdio.h>
int main ()
{
int n,reverse=0,lastdigit ;
printf("enter the number:");
scanf("%d", &n);
while (n>0);
   {
    lastdigit=n%10;
    reverse=reverse*10+lastdigit;
    n=n/10;
    }
if (n==reverse)
{printf("the number is palindrome");}
else
{printf("the number is not palindrome");}
return 0 ;
}
