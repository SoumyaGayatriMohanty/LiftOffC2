#include<stdio.h>

void asc_sort(int a[100],int n);

void main()
{
    int a[100],i,n;
    printf("enter n:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("a[%d]",&i);
        scanf("%d",&a[i]);
    }
    asc_sort(a,n)
    printf("array in ascending order:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);

    }
}
asc_sort(int a[10],int n)
{
    int i,j,temp;
    for(i=0;i,n-1;i++)
    {
    for(j=j+k;j<n;j++)
    {
        if(a[i]>a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    }
    }
