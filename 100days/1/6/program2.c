//program to   check postive,negative or zero integer
#include<stdio.h>
int main()
{
int number;
printf("enter the value:");
scanf("%d",&number);
if (number>=0)
{if (number>0)
   {printf("the number is postive");
    }
else
{printf("the number is  neither negative nor postive");
}
}
else
{
printf("the number is negative");
}
return 0;
}
