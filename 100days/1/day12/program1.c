//progarm to calculate  library fine based on days
#include<stdio.h>
int main()
{
int day ,i=0;
printf("enter the day:");
scanf("%d",&day);
if (day<=5)
   { 
       while (i<=10)
        {  
              i=i+2;
             if (i==2||i==4||i==6||i==8||i==10)
             { 
                  printf("pay the fine:%d\n%d\n",i,day);
               }
                }
         printf("%d",i);
         }
else if (day>5 && day<=10)
       {  
          i=i+10;
        while (i<=30)
          {  
               i=i+4;
              if (i==12||i==14||i==16||i==18||i==20||i==22||i==24||i==26||i==28||i==30)
               {
                  printf("pay the fine:%d\n",i);}
                   }
             }
else if  (day>10 && day<=30)
         { 
          i=i+30;
          while (i<=150)
             { 
               i=i+6;
                if (i==36||i==42||i==46||i==52||i==58||i==64||i==70||i==76||i==82||i==88||i==94||i==100||i==106||i==112||i==118||i==124||i==130||i==136||i==142||i==148)
                {printf("pay the fine :%d\n",i);}
                }
            }
 else 
       { printf("more the 30 days : membership cancelled");}
return 0 ;
}
              
 
