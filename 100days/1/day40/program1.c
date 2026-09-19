//perform dignoal   traversal of a matrix..
#include<stdio.h>
int main ()
{
int i,j;
printf("Enter row and colum in array:");
scanf("%d%d", &i,&j);
int  a[i][j];
for (int k=0;k<i;k++)
   {for (int l=0;l<j;l++)
       {scanf("%d", &a[k][l]);}
   }    
for(int k=0;k<i;k++)
   {
     for (int l=0;l<=k;l++)
       {if (l==k)
         {printf("%d",a[k][l]);}
       else if (k>l && (k+l)%2==1)
         {printf("%d%d", a[l][k],a[k][l]);}
       else if (k<l &&  (k+l)%2==0)
           {printf("%d%d", a[l][k],a[k][l]);} 
      }
   }
return 0;
}


