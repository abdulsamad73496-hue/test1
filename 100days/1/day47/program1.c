//check two string are anagrams..
#include<stdio.h>
int main ()
{
int n,la=0,lb=0;
printf("Enter how many char you have to input:");
scanf("%d", &n);
char a[n+1],b[n+1];
getchar();
fgets(a,sizeof(a),stdin);
getchar();
fgets(b,sizeof(b),stdin);
for (int i;i<n;i++)
    {
       la=la+a[i];
       lb=lb+b[i];
     }
if (la==lb)
  {
    printf("Anagrams");
   }
else 
   {
    printf("Not  anagrams");
    }
return 0;
}  
