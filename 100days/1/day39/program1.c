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
int k,l,r[i];
for (k=0;k<i;k++)
    {for (l=k;l<=k;l++)
        {r[l]=a[k][l];}
    }
int flag=0;
for (int k=0;k<i;k++)
    {
      for (int l=k+1;l<i;l++)
        {
          if (r[i]==r[l])
            {
              flag=1;
              break ;
            }
        }
     }
if(flag==0)
   {printf("true");}
else 
    {printf("false");}
}
else
  { printf("not square matrix");}
return 0;
}
