#include<stdio.h>
// #define PI 3.14
// void main()
// {
//     int a=PI+2;
//     printf("%d",a);
// }

// #define Area(x) x*x+22
// void main()
// {
//     int a=Area(2);
//     printf("%d",a);
// }

#define PI 3.14
#define Area(x) x*x*PI
void main()
{
    printf("%f",Area(3));
}
