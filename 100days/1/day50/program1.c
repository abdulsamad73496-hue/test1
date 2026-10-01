//date formate
#include<stdio.h>
int main ()
{
int  day,month,year;
printf("Enter date:\n");
scanf("%d/%d/%d", &day, &month, &year);
if  (month<=12)
{
switch  (month)
    {
     case  1:
       {printf("%d-january-%d", day,year);
        break;}
     case 2:
       {printf("%d-february-%d",  day,year);
       break;}
     case 3:
       {printf("%d-march-%d",  day, year);
       break;}
     case 4:
       {printf("%d-april-%d", day,year);
        break;}
     case 5:
       {printf("%d-may-%d", day,year);
             break;}
     case 6:
       {printf("%d-june-%d", day,year);
        break;}
     case 7:
       {printf("%d-july-%d", day,year);
          break;}
     case 8:
       {printf("%d-august-%d", day,year);
            break;}
     case 9:
       {printf("%d-september-%d",day,year);
              break;}
     case 10:
        {printf("%d-october-%d", day,year);
                 break;}
     case 11:
        {printf("%d-november-%d", day,year);
               break;}
     case 12 :
        {printf("%d-december-%d", day,year);
              break;}
     default  :
         {printf("not a month");} 
      }  
  } 
else 
    {  printf("month greater then:%d", 12);}
return 0;
} 
