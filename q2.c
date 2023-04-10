#include<stdio.h>
void main()
{
    float sal;
    printf("enter the salary ");
    scanf("%f",&sal);

    float DA = 25*sal/100;
    float HRA = 15*sal/100;

    float gs = DA+HRA+sal;

    float NETsal = gs*10/100;

    printf("%f",NETsal);

}