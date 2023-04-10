#include<stdio.h>
void main()
{
    int n,sum;
    printf("enter the no.");
    scanf("%d",&n);
    for(int i=0;i<=n/2;i++)
    {
        if(n%i==0)
        sum+=i;
    }
    if(sum==n)
    printf("perfect no.");
    else
    printf("not a perfect no.");
}