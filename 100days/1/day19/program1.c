//program to find lcm  of two no..
#include<stdio.h>
int main()
{
int i, n1 ,n2,lcm;
printf("enter the n1");
scanf("%d", &n1);
printf("enter the n2");
scanf("%d" , &n2);
for (i=n1>n2 ? n1 :n2 ;; i++)
   {
       if (i%n1==0 && i%n2==0)
        {
           printf("LCM=%d", i);
           break ;
        }
    }
return 0;
}
