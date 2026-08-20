//program to find area and perimeter of rectangle
#include<stdio.h>
int main()
{
int length,breath,area,perimeter;
scanf("%d" ,&length);
printf("length is :%d",length);
scanf("%d",&breath);
printf("breath is : %d",breath);
area=length*breath;
perimeter=2*(length+breath);
printf("the area of rectangle is:%d",area);
printf("the perimeter of rectangle is :%d",perimeter);
return 0 ;
}

