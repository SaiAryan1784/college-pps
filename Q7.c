#include<stdio.h>
void main()
{
    int a,b,t;
    
    printf("Enter a ");
    scanf("%d",&a);
    printf("Enter b ");
    scanf("%d",&b);

    t=a;
    a=b;
    b=t;

    printf("with using third variable,a %d,b %d \n",a, b);

    a+=+b;
    b=a-b;
    a-=b;

    printf("Without using varibales a-%d b-%d",a,b);

}