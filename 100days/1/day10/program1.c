//program to classify  triangle based on it side length
#include<stdio.h>
int main()
{
int side1 ,side2,side3 ;
printf("enter the value of side:");
scanf("%d",&side1);
scanf("%d",&side2);
scanf("%d",&side3);
if (side1==side2 && side2==side3)
{printf("it is a equilateral triangle");}
else if  (side1=side2 &&  side2!=side3 )
{printf(" it is a isosceles triangle");}
else if (side2=side3 && side1!=side2)
{printf("it is a isosceles trinagle");}
else if (side3=side1 && side3!=side2)
{printf("it is a  isosceles trinagle");}
else 
{printf("it is a scalene trinagle");}
return 0;
}
