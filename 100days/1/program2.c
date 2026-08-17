//program to input  two number  and display  their sum ,differnce ,product and quotient
#include<stdio.h>
int main()
{ 
int  a,b,sum,diffrence,product,quotient;
scanf("%d",&a);
printf("frist number:%d",a);
scanf("%d",&b);
printf("second number:%d",b);
sum=a+b;
diffrence=a-b;
product=a*b;
quotient=a/b;
printf("sum=%d/n,diffrence=%d/n,product=%d/n,quotient=%d/n",sum,diffrence,product,quotient);
return 0;
}
