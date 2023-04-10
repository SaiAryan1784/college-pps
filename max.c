#include<stdio.h>
void main()
{
    int arr[100],n,max=0;
    printf("enter the no. of elements you want to enter in array: ");
    scanf("%d \n",&n);

    printf("enter the elements");
    for(int i=0;i<n;i++)
    {
        scanf("%d/n",&arr[i]);
        if(arr[i]>max)
            max=arr[i];
    }

    printf("%d is the greatest element in array");

}