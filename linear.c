#include<stdio.h>
void main()
{
    int n,arr[100],s,c=0;
    printf("enter the no. of elements you want to enter in array: ");
    scanf("%d \n",&n);

    printf("enter the elements");
    for(int i=0;i<n;i++)
    {
        scanf("%d/n",&arr[i]);
        if(arr[i]==s)
        c++;
        printf("element is present in %d index of array",i);
    }

    printf("enter the elemnt you want to find");
    scanf("%d /n",&s);

    printf("%d many times element occured in array");
}