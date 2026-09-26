//REMOVE ALL VOWEL FROM STRING...
#include<stdio.h>
int main ()
{
int  n;
printf("Enter how many char you have to input");
scanf("%d", &n);
char  a[n+1];
getchar ();
fgets(a,sizeof(a),stdin);
for (int i=0;i<n;i++)
     {  if (a[i]!='a' && a[i]!='A'&& a[i]!='e'&& a[i]!='E'&& a[i]!='i'&& a[i]!='I'&& a[i]!='o'&& a[i]!='O'&& a[i]!='u'&& a[i]!='U')
          {  
             printf("%c", a[i]);
           }
     }
return 0;
}
         
