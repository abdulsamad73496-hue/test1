//find  the  sum of each row  of a matrix and  store it in an array..
#include<stdio.h>
int main ()
{
int i,j,n,Telement,sum;
printf("Enter the  row:i");
printf("Enter  the  column:j");
scanf("%d%d", &i,&j);
int a[i][j];
int b[i];
Telement=i*j;

for (int k=0;k<i;k++)
   { sum=0;
     for (int l=0;l<j;l++)
       {
        scanf("%d", &a[k][l]);
        sum=sum+a[k][l]; 
        }
        b[k]=sum;
   }
for (int k=0;k<i;k++)
    {
      printf("%d,", b[k]);
    }          
return 0;
}   
  
