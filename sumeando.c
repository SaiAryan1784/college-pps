#include<stdio.h>
void main()
{
    int n,sume,sumo;
    printf("enter the no.");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        sume+=i;
        else
        sumo+=i;
    }
    printf("sum of even no.s %d",sume);
    printf("sum of odd no.s %d",sumo);
}