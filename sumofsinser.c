#include<stdio.h>
#include<math.h>

int fact(int n)
{
    int f=1;
    for(int i=1;i<=n;i++)
    {
        f*=i;
    }

    return f;
}

void main()
{
    int n,x;
    printf("enter the no. till sine series is needed");
    scanf("%d",&n);
    printf("Enter the no. of which sine series is needed");
    scanf("%d",&x);

    int sum;
    int c=1;

    for(int i=1;i<=c;i=i+2)
    {
        if(c%2==0)
        {
            sum-=(pow(x,i))/fact(i);
        }
        else
        {
            sum+=(pow(x,i))/fact(i);
        }
        c++;
    }

    printf("sum of sine series is %d",sum);
}