//program to check the leap year
#include<stdio.h>
int main()
{
int year;
printf("enter the year which you went to check:");
scanf("%d",&year);
if  (year%4==0)
 {
      if (year%100==0)
      {  
        if (year%400==0)
          {printf("leap year");}
        else
           {printf("not a leap year");}
          }
      else
          {printf(" leap year");}
  }
 else
   {
    {printf("not a leap year");}
     }
}
 

