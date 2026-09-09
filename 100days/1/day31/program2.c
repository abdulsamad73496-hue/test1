//reverse   an array
#include<stdio.h>
int main ()
{
int i,a[100],n;
    printf("enter how many  element you have to  input ?");
    scanf("%d", &n);
for (i=0;i<n;i++)
   {
    printf("enter the no");
    scanf("%d", &a[i]);
    }
printf("original array \n");

for(int i=0;i<n;i++){
printf(" %d  ",a[i]);
}

for(int i=0;i<n/2;i++){
	int temp= a[i];
	a[i]=a[n-1-i];
	a[n-1-i]=temp;

}

printf("\n reversed arrray");
for(int i=0;i<n;i++){
printf(" %d  ", a[i]);
}

return 0;
}
