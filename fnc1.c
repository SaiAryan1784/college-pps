#include<stdio.h>

int recarea(int l,int b)
{
    return l*b;
}

void main()
{
    int l,b,area;
    printf("enter the length-");
    scanf("%d\n",&l);
    printf("enter the Breadth-");
    scanf("%d\n",&b);

    area=recarea(l,b);

    printf("area is %d",area);
    
}