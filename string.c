#include<stdio.h>
#include<string.h>
void main()
{
    char s1[]="Hello";
    char s2[100]="Hello";
    char s3[100]={'H','e','l','l','o','\0'};

    puts(s1);
    printf("%d \n",sizeof(s1));
    puts(s2);
    printf("%d \n",sizeof(s2));
    puts(s3);
}