//program to convert sceond into hours:miunte:second formate
#include<stdio.h>
int main()
{
int second,hours,minute;
printf("enter the time in second:");
scanf("%d",&second);
minute=second/60;
second=second%60;
hours=minute/60;
minute=minute%60;
printf("%d:%d:%d",hours,minute,second);
return 0;
}


