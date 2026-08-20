#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the   value  of a :");
scanf("%d", &a );
printf("%d",a);
printf("enter the value of b:");
scanf("%d",&b);
printf("%d",b);
c=a;
a=b;
b=c;
printf("the value of'a' after swap:%d",a);
printf("the value of 'b' after swap :%d",b);
return 0;
}
