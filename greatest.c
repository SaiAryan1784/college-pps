#include<stdio.h>
void main()
{
    int a,b,c;
    printf("no. 1");
    scanf("%d",&a);
    printf("no. 2");
    scanf("%d",&b);
    printf("no. 3");
    scanf("%d",&c);

    if(a>b)
    {
        if (a>c)
        {
            printf("a");
        }
        else
        {
            printf("c");
        }
        
    }
    else if(a<b)
    {
        if (b>c)
        {
            printf("b");
        }
        else
        {
            printf("c");
        }
    }
}