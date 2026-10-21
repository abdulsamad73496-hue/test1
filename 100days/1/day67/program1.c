#include<stdio.h>
int main()
{
    int n1,n2;
    printf("Enter no of element in n1:");
    scanf("%d",&n1);
    printf("Enter no of element in n2:");
    scanf("%d",&n2);
    int a[n1],b[n2],c[n1+n2];
    for(int i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
        if(i<n1-1)
        {
            getchar();
        }
    }
    for(int i=0;i<n2;i++)
    {
        scanf("%d",&b[i]);
        if(i<n2-1)
        {
            getchar();
        }
    }
    for(int i=0;i<n1;i++)
    {
        c[i]=a[i];
    }
    for(int i=0,j=n1;i<n2,j<n2+n1;i++,j++)
    {
        c[j]=b[i];
    }
    for(int i=0;i<n1+n2-1;i++)
    {
        for(int j=0;j<n1+n2-1-i;j++)
        {
            if(c[j]>c[j+1])
            {
                int temp=c[j];
                c[j]=c[j+1];
                c[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n1+n2;i++)
    {
        printf("%d ",c[i]);
    }
    return 0;
}
