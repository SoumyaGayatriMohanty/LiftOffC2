#include<stdio.h>
void main()
{
    int size1,size2
    printf("enter the number of elements of first array:\n");
    scanf("%d",&size1);
    size2=size1;
    int arr1[size1],arr2[size2];
    printf("enter the elements of the first array:\n");
    for(i=0;i<size1;i++)
    {
        scanf("%d",&arr1):
        arr2[i]=arr1[i];
    }
    printf("the first array is:\n");
    for(i=0;i<size1;i++)
    {
        printf("%d\t",arr1[i]);
    }
   printf("the second array is:");
   for(i=0;i<size2;i++)
   {
        printf("%d\t",arr2[i]);
   } 
}