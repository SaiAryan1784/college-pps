#include<stdio.h>
int main()
{
    int n,count;
    printf("enter the no.");
    scanf("%d",&n);

    for(int i=1;i<=n && count<=3;i++)
    {
        if(n%i==0)
        count++;
    }
    if(count==2)
    printf("prime no.");
    else
    printf("not a prime");

}