#include<stdio.h>
void main()
{
    int a[]={3,5,1,2,10,6,7};
    int n= sizeof(a)/sizeof(a[0]);

    for(int i=1;i<n;i++)
    {
        int j=i;
        while(j>0 && a[j-1]>a[j])
        {
            int t;
            t=a[j-1];
            a[j-1]=a[j];
            a[j]=t;
            j--;
        }
    }
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);
}