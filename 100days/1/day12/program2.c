// program to calculate  electricity  bill based on units consumed with these rates :
#include<stdio.h>
int main()
{
int  unit,money,n ;
printf("enter the unit");
scanf("%d",&unit);
if (unit<=100)
   {  money = unit*5;
     printf("pay bill:%d",money);
    }
else if (unit>100 && unit<=200)
   { n=500;
     unit=unit-100;
     money=  unit*7+n;
     printf("pay bill:%d",money);
    }
else if (unit>200 && unit <=300)
    {n=1200;
      unit=unit-200;
     money=unit*10+n ;
      printf("pay bill :%d",money);
     }
else
      {n=1300;
       unit=(unit-300);
       money=unit*12+n;
       printf("pay bill :%d",money);}
return 0 ;
}
