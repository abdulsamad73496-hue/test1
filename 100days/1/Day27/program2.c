//pattern
#include<stdio.h>
int main ()
{
int i,j,s,a;
   for (i=1;(i<=7);i++)
       {
         if (i==1||i==7)
            { s=1;
              a=3;}
         else if (i==2||i==6)
            { s=3;
              a=2;}
         else if (i==3||i==5)
            { s=5;
              a=1;}
          else 
             { s=7;
               a=0;}
          for (int k=1;(k<=a);k++)
             {
                printf(" ");
              }
         for (j=1;(j<=s);j++)
             {
               printf("*");
              }
         printf("\n");
         }
return 0;
}
