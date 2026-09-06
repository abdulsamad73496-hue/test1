//program to print  prime no  form  1 to n..
#include<stdio.h>
int main()
{
int i, n,count;
printf("enter the no upto which you have to find prime no:");
scanf("%d", &n);
      for(i=1;(i<=n);i++)
        {   
          count=0;
       for (int j=1;(j<=i);j++)
       {
            if (i%j==0)
            {
              count++;
              }
        }    
       if (count==2)
         {
          printf("%d",i);      
          }
        }
      return 0;
} 

