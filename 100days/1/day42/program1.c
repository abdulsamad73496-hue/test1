//Count  vowel and consonants  in a string ...
#include<stdio.h>
int main ()
{
int c=0,v=0,n;
char A[n];
printf("Enter how many charcater you have to print :");
scanf("%d", &n);
for (int i=0;i<n;i++)
  {scanf("%c", &A[i]);}
for (int k=0;k<n;k++)
    { if ( A[k]=='a'||A[k]=='e'||A[k]=='i'||A[k]=='o'||A[k]=='u'||A[k]=='A'||A[k]=='E'||A[k]=='I'||A[k]=='O'||A[k]=='U')
         {v=v+1;}
      else 
         {c=c+1;}
     }
printf("The no of  vowel %d\n",c);
printf("The no of consonants %d",v);
return 0;
}
