#include<stdio.h>
int main ()
{
char a[50];
int age;
FILE *ptr;
fgets(a, sizeof(a), stdin);
scanf("%d", &age);
ptr=fopen("info.txt", "w");
if (ptr==NULL)
   {
    printf("file is not be opened");
    return 1;
    }
fprintf(ptr, "Name:%s\nAge:%d", a,age);
fclose(ptr);
printf("program is succesfull\n");
    FILE *str;
    char b[100];

    str = fopen("info.txt", "r");

    if (str == NULL) 
    {
        printf("File not found");
        return 1;
    }

    while (fgets(b, sizeof(b), str) != NULL) {
        printf("%s", b);
    }

    fclose(ptr);
    return 0;
}
