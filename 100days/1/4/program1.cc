//program to  swap two number without  using a  thrid varible:
#include<stdio.h>
int main()
{
int a,b ;
printf(" enter the value of 'a':");
scanf("%d",&a);
printf("%d",&a);
printf("enter the  value of 'b':");
scanf("%d",&b);
printf("%d",b);
a=a+b;
b=a-b;
a=a-b;
printf("the value of after  swap is :%d",a);
printf("the value of after swap is :%d",b);
return 0;
}
