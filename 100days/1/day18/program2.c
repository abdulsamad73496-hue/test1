//program to find HCF
#include<stdio.h>
#include<string.h>
int main()
{
int count, n1,n2,k,i,j=0,a[100],largest;
printf("enter n1:");
scanf("%d",&n1);
printf("enter the n2:");
scanf("%d", &n2);
if (n1<=n2)
    {
      for ( i=1;(i<=n1);i++)
           { 
                  if (n1%i==0 && n2%i==0)
                      {a[j]=i;
                        j++;    }
            }
     }
else
    {
      for (i=1;(i<=n2);i++)
                {
                  if(n1%i==0 &&  n2%i==0)
                     { a[j]=i;
                         j++;    }
                 }
      }
count=0;
while(a[count] !=0)
      { count++;}
largest=a[0];
for (k=0;(k<=count+1);k++)
     {
       if (a[k]>largest)
           {largest=a[k];
            }
       }
printf("HCF of TWO NO IS %d,",largest);
return 0 ;
}
                   
            
