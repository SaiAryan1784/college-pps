#include<stdio.h>
void main()
{
    int s1,s2,s3,s4,s5,sum;
    float perc;

    printf("enter marks of sub1 ");
    scanf("%d",&s1);
    printf("enter marks of sub2 ");
    scanf("%d",&s2);
    printf("enter marks of sub3 ");
    scanf("%d",&s3);
    printf("enter marks of sub4 ");
    scanf("%d",&s4);
    printf("enter marks of sub5 ");
    scanf("%d",&s5);

    sum=s1+s2+s3+s4+s5;

    perc=sum*100/500;

    printf("sum is %d \npercentage is %f",sum,perc);
}