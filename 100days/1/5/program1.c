// program to calculate the  simple  intrest and compoud intrest:
#include<stdio.h>
#include<math.h>
int main ()
{
float princple,rate,year,simpleintrest,compoundintrest,amount;
printf("enter the value of 'princple'");
scanf("%f",&princple);
printf("enter the value of 'rate'");
scanf("%f",&rate);
printf("enter the value of 'year'");
scanf("%f",&year);
simpleintrest=(princple*rate*year)/100;
amount=princple*pow(1+rate/100,year);
compoundintrest=amount-princple;
printf("the simple intrest is :%f",simpleintrest);
printf("the compound intrest is :%f",compoundintrest);
return 0 ;
}
