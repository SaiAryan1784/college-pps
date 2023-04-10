#include<stdio.h>
int main()
{
    int a,b,c,d,e,perc;
    char c;
    printf("marks 1");
    scanf("%d",&a);
    printf("marks 2");
    scanf("%d",&b);
    printf("marks 3");
    scanf("%d",&c);
    printf("marks 4");
    scanf("%d",&d);
    printf("marks 5");
    scanf("%d",&e);

    perc=(a+b+c+d+e)*100/500;

    if(perc<=100 && perc<=90)
        c='A';
    else if(perc<=89 && perc<=80)
        c='B';
    else if(perc<=79 && perc<=70)
        c='C';
    else if(perc<=69 && perc<=60)
        c='D';
    else if(perc<=59 && perc<=50)
        c='E';
    else
    {
        c='F';
    }

    printf("Grade %c",c);
    
}