// program to  reverse a given  number.
#include<stdio.h>
int main()
{
int lastdigit,reverse=0,digit;
printf("enter the digit which you want to reverse:");
scanf("%d", &digit);
while  (digit>0)
   {lastdigit=digit%10;
    digit=digit/10;
    reverse=(reverse*10+lastdigit);
     }
printf("the no after:%d" , reverse);
return 0 ;
}
