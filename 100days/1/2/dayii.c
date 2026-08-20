//program to calculate the area and circumference of circle
#include<stdio.h>
int main()
{
float  radius, area, circumference;
printf("the radius of circle:");
scanf("%f", &radius);
area=3.14*radius*radius;
circumference=2*3.14*radius;
printf("the area of circle is :%f",area);
printf("the  circumference is :%f",circumference);
return 0 ;
}
