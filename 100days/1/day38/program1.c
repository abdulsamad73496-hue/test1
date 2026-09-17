//ADD TWO MATRIX...
#include<stdio.h>
int main ()
{
int i,j;
printf("enter the row and colunm");
scanf("%d%d", &i,&j);
int a[i][j],b[i][j];
if (i==j)
{for (int k=0;k<i;k++)
     {for (int l=0;l<j;l++)
        {scanf("%d",&a[k][l]);}
      }
for (int k=0;k<i;k++)
    {for (int l=0;l<j;l++)
      {scanf("%d", &b[k][l]);}
     }
int c[i][j];
printf("new  matrix after addition of two matrix");
for (int k=0;k<i;k++)
    {for (int l=0;l<j;l++)
       { c[k][l]=a[k][l]+b[k][l];
        printf("%d ",c[k][l]);  
        }
      printf("\n");
     }
}    
else 
   {  printf("not square marix");}
return 0;
}
