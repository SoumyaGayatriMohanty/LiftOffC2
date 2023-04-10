#include<stdio.h>
void main()
{
    int size1,size2,i,k,merge[100];
    printf("print the size of the first array\n");
    scanf("%d",&size1);
    int arr1[size1];
    printf("enter the elements of the first array\n");
    for(i=0;i<size1;i++)
    {
    scanf("%d",&arr1[i]);
    merge[i]=arr1;
    }
    k=i;
    printf("enter the sixe of the secind array\n");
    scanf("%d",&size2);
    int arr2[size2];
    printf("enter the elements of the second array\n");
    for(i=0;i<size2;i++)
    {
    scanf("%d",&arr2[size2]);
    merge[k]=arr2[i];
    k++;
}
printf("the new array merged reversed array is\n");
for(i=k-1;i>=0;i--)
{
    printf("%d",arr[i]);
}
}