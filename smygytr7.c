#include<stdio.h>
void main()
{
    int
    printf("enter the size of the array\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements of the array");
    for(i=0,i<n;i++)
    {
        scanf("%d",arr[i]);
    }
    for(i=0;i<n;i++)
    {
        min_in=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min_in])
            {
                min_in=j;
            }
        }
        temp=*x;
        *x=*y;
        *y=temp;
    }
    printf("the final array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
}