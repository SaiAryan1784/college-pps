#include<stdio.h>
#include<math.h>
void main()
{
    int x,n,sum=1,prod;
    scanf("%d",&x);
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
            prod*=j;
        if(i%2!=0)
        sum-=pow(x,i)/prod;
        else
        sum+=pow(x,i)/prod;
    }
    printf("sum-%d",sum);
}