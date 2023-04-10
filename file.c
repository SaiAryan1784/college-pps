#include<stdio.h>
void main()
{
    FILE *fp;
    fp=fopen("file1.txt","a+");
    char ch;
    printf("\n enter the character");
    scanf("%c",&ch);
    putc(ch,fp);
    fclose(fp);

    fp = fopen("file1.txt","r");
    ch=getc(fp);

    printf("%c",ch);
    fclose(fp);
}