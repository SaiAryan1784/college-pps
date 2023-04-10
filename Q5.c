#include<stdio.h>
#include<math.h>
void main()
{
    int x1,x2,y1,y2;
    printf("Enter the x1 coordinate");
    scanf("%d",&x1); 
    printf("Enter the x2 coordinate");
    scanf("%d",&x2); 
    printf("Enter the y1 coordinate");
    scanf("%d",&y1); 
    printf("Enter the y2 coordinate");
    scanf("%d",&y2);  

    int diffx=x2-x1;
    int diffy=y2-y1;

    int sum = pow(diffx,2)+pow(diffy,2);

    int final = sqrt(sum);

    printf("distance is %d",final);

}