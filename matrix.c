#include<stdio.h>
void main()
{
    int arr[100][100],n,ans=1;

    printf("enter the size of square matrix: ");
    scanf("%d",&n);

    printf("\n");
    printf("enter elements of matrix - \n");

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d \n",&arr[i][j]);
        }
    }

    printf("output \n\n");

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    printf("transpose \n");

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",arr[j][i]);
            if(arr[j][i]!=arr[i][j]);
            ans=0;
        }
        printf("\n");
    }
    if(ans==1)
    printf("Symmetric");
    else 
    printf("Non-Symmetric");


}