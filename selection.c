#include<stdio.h>
void main()
{
    int a[]={3,5,1,2,10,6,7};
    int n= sizeof(a)/sizeof(a[0]);

    int min;
    int t;

    for(int i=0;i<n;i++)
    {
        min=i;
        for(int j=i;j<n;j++)
        {
            if(a[j]<a[min])
            min=j;
        }
        t=a[min];
        a[min]=a[i];
        a[i]=t;
    }
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);
}