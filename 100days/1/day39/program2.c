//check digonal element..
#include<stdio.h>
int main ()
{
int  i,j;
scanf("%d%d" , &i,&j);
if (i==j)
{int a[i][j];
for (int k=0;k<i;k++)
    {for (int l=0;l<j;l++)
        {scanf("%d", &a[k][l]);}
    }
int k,l,sum=0;
for (k=0;k<i;k++)
    {for (l=k;l<=k;l++)
        {sum=a[k][l]+sum;}
     }
printf("The sum of digonal element: %d",sum);
}
else 
   {printf("Not square matrix");}
return 0;
}
