#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,c=0,t,sum,a=0;
    int s;
    scanf("%d",&n);
    scanf("%d",&m);
    for(int i=n;i<=m;i++)
    {
        t=i;
        while(t)
        {
            c++;
            t/=10;
        }
        t=i;
        while(t)
        {
            s=t%10;
            sum+=pow(s,c);
            t/=10;
        }
        if(sum==i)
        {
            printf("%d ",i);
            a++;
        }
    }
    printf("\n %d",a);
    return 0;

}