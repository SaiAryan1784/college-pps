#include<stdio.h>
void main()
{
    int n1,n2,sum1,sum2;
    printf("enter the no.1- \n");
    scanf("%d",&n1);
    printf("enter the no.2- ");
    scanf("%d",&n2);
    for(int i=0;i<=n1/2;i++)
    {
        if(n1%i==0)
        sum1+=i;
    }
    
    if(sum1!=n2)
    {
        printf("not amicable pair");
        return 0;
    }

    for(int i=0;i<=n2/2;i++)
    {
        if(n2%i==0)
        sum2+=i;
    }

    if(sum2==n1)
    printf("amicable pair");
    else 
    printf("not a amicable pair");
    
}