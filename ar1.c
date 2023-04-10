#include<Stdio.h>
void main()
{
    int arr[5],max=0;

    for(int i=0;i<5;i++)
    {
        printf("enter the value of index %d -",i);
        scanf("%d",&arr[i]);
        if(arr[i]>max)
            max=arr[i];
    }
    
    printf("max value in array-%d",max);
}