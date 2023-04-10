#include<stdio.h>
void main()
{
    FILE *fp;
    fp = fopen("file1.txt","w");
    char ch;
    int num;
    printf("enter characters of no.s");
    scanf("%d",&num);
    printf("enter the characters now ");
    scanf("%c",&ch);
    int i=1;
    while(i<=num)
    {
        putc(ch,fp);
        scanf("%c",&ch);
        i++;
    }
    fclose(fp);

    fp = fopen("file1.txt","r");
    ch = getc(fp);
    printf("%c",ch);
    while(ch!=EOF)
    {
        printf("%c",ch);
        ch=getc(fp);
    }
    fclose(fp);
}