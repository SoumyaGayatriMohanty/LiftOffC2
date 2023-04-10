#include<stdio.h>
void main()
{
    int size,i,j,count=0,maxcount=0,maxelement,occurence;
    printf("enter the number of elements:\n");
    scanf("%d",&size);
    int arr[size];
    printf("enter the elements of array:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++)
    {
        count=1;
        for(j=i+1;j<size;j++)
        {
            if(arr[j]==arr[i]){
                count++;
                if(count>maxcount){
                    maxelement=arr[j];
                    maxcount=count;
                }
            }
        }
    }
    printf("maximum frequency element:%d,occurence=%d times",maxelement,maxcount);
}