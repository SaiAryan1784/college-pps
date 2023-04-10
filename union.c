#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct student
{
    char name[20];
    int roll;
    float marks[3];
}s[50];

void main()
{
    for(int i=0;i<50;i++)
    {
        printf("enter name of student %d-",i+1);
        fflush(stdin);
        gets(s[i].name);
        printf("\n");
        printf("enter rollno.");
        scanf("%d \n",&s[i].roll);
        for(int j=0;j<3;j++)
        {
            printf("enter marks of subject %d",j+1);
            scanf("%f",&s[i].marks[i]);
        }
    }

    for(int i=0;i<50;i++)
    {
        printf("name of student %d:- ",i+1);
        puts(s[i].name);
        printf("\n");
        printf("rollno. %d",s[i].roll);
        for(int j=0;j<3;j++)
            printf("marks of subject %d- %d \n",j+1,s[i].marks[i]);
    }
}