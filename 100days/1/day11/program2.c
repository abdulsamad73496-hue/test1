// PROGRAM TO FIND  PROFIT  OR LOSS PERCENTAGE GIVEN PROFIT AND SELLING PRICE 
#include<stdio.h>
int main ()
{
float  costprice,sellingprice,profit,loss ;
printf("enter the  cost price ");
scanf("%f",&costprice);
printf("enter the selling price ");
scanf("%f",&sellingprice);
if (costprice>sellingprice)
           {
            profit=((costprice-sellingprice)/(costprice))*100;
            printf("your in  profit of :%f\n",profit);
            }
else if (costprice<sellingprice)
       {
        loss=((sellingprice-costprice)/(costprice))*100 ;
        printf("your are in loss of:%f",loss);
        }
else
      {
       printf("neither  profit nor loss");
       } 
return 0 ;
}
