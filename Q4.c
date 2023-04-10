#include<stdio.h>
void main()
{
    int r,s,l,b;

    printf("Enter the length of rectange ");
    scanf("%d", &l);
    printf("Enter the breadth of rectange ");
    scanf("%d", &b);
    printf("Enter the radius for circle and semicircle ");
    scanf("%d", &r);
    printf("Enter the side of square ");
    scanf("%d",&s);

    float arsq,arc,arsc,arrec;

    arsq=s*s;
    arsc=3.14*r*r/2;
    arc=3.14*r*r;
    arrec=l*b;

    printf("ar of square is %f \nar of rectangle is %f \nar of semicircle %f \nar of circle is %f ",arsq,arrec,arsc,arc);

}
