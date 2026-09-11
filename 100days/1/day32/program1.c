//merge two array..
#include<stdio.h>
int main ()
{
int  a[100],b[100],n1,n2,count=0,temp=0;
printf("how many element you have to input in frist array?");
scanf("%d",&n1);
printf("how many element you have to input in second array?");
scanf("%d", &n2);
for (int i=0;i<n1;i++)
    {printf("enter element  in frist array:");
     scanf("%d", &a[i]);
     temp=temp+1;}
for (int i=0;i<n2;i++)
    {printf("enter  element in sceond array:");
     scanf("%d", &b[i]);
     count=count+1;}
int c=temp;
int d=count; 
int jan=c;
int feb=d;                 
 if (temp>=count)
        {int i=0;
          while (i<count)
           { a[c]=b[i];
               jan++;
               c++;
               i++;     }
             printf("merge array second with frist:");
         for (int i=0;i<jan;i++)
              {printf("%d",a[i]);}
       }
else
     { int i=0;
          while (i<temp)
           { b[d]=a[i];
             feb++;
             d++;  
             i++;      }
            printf("merge array frist with second:");
         for (int i=0;i<feb;i++)
              {printf("%d",b[i]);}
      }
return 0;
}    
                   
