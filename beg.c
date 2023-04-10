#include<stdio.h>
#include<math.h>

int func (int n )
{
    if (n==1)
    return 1;
    else{
        printf("%d\n",n);
        return func(n-1);
    }
}

void main()
{
    printf("Enter a number");
    int n; 
    scanf("%d",&n); 
    int s=0;
    s= func(n);
    printf("%d",s);
}
