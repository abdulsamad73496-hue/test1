//frist Repeating  lowercase alphabet in a string...
#include<stdio.h>
int main ()
{
int n,count,max=0;;
printf("Enter how char you have to input:");
scanf("%d", &n);
char a[n+1],result;
getchar();
fgets(a,sizeof(a),stdin);
for (int i=0;i<n;i++)
    { count=0;
       for (int j=0;j<n;j++)
           {
             if (a[i]==a[j])
                 {count++;}
            }
       if (count>max)
         {
           max=count;
           result=a[i];
          }
     }
printf("Most ocuurence char is:%c\n" , result);
printf ("The no of time it come:%d", max);
return 0;
}

