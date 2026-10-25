#include<stdio.h>
int main ()
{
char a[50];
int age;
FILE *ptr;
fgets(a, sizeof(a), stdin);
scanf("%d", &age);
ptr=fopen("info.text", "w");
if (ptr==NULL)
   {
    printf("file is not be opened");
    return 1;
    }
fprintf(ptr, "Name:%s\nAge:%d", a,age);
fclose(ptr);
printf("program is succesfull");
return 0;
}
