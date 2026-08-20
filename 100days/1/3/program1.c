//program  to convert  temperature  from  celsius to fahrenheit.
#include<stdio.h>
int main()
{
float  celsius,fahrenheit ;
printf("enter the value of temprature in  celsius :");
scanf("%f" ,&celsius);
printf("%f",celsius);
fahrenheit=(32+1.8*celsius);
printf("the value of temprature in  fahrenheit:%f",fahrenheit);
return 0 ;
}
