#include<stdio.h>
int main()
{
    int a,k,c=0;
    
    scanf("%d%d",&a,&k);
    int arr[a];
    for(int i=0;i<a;i++)
        scanf("%d",&arr[i]);

    for(int i=0;i<a-1;i++)
    {
        for(int j=i+1;j<a;j++)
        {
            if(k%(arr[i]+arr[j])==0)
                c++;
        }
    }
    printf("%d",c);
    return 0;
}