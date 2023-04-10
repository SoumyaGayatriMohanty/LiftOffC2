#include<stdio.h>
void main()
{
    int size,i,num,occr=0;
    printf("enter the array size:\n");
    scanf("%d",&size);
    int arr[size];
    printf("enter the array elements:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter a array element to know");
    scanf("%d",&num);
    for(i=0;i<size;i++)
    {
        if(arr[i]==num)
        {
            occr++;
        }
    }
    printf("%d occured %d times \n",num,occr);
}