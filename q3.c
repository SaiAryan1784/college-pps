#include<stdio.h>
#include<math.h>
void main()
{
    float P,R,T;
    printf("Enter the Principle ");
    scanf("%f",&P);
    printf("Enter the Rate ");
    scanf("%f",&R);
    printf("Enter the Time Period ");
    scanf("%f",&T);

    float SI,CI;

    SI=P*R*T/100;
    float sec=pow((1+(R/100)),T);
    CI=P*sec-P;

    printf("SI is %f, CI is %f",SI,CI);
}