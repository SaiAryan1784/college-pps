#include<stdio.h>
int main()
{
    char C,lc,uc;
    scanf("%c",&C);
    if(C>='a' && C<='z')
    {
        printf("Lowercase");
        lc=C-32;
        printf("lc to uc %c",&lc);
    }
    else if(C>='A' && C<='Z')
    {
        printf("Lowercase");
        uc=C+32;
        printf("uc to lc %c",&uc);
    }
    else if(C>='0' && C<='9')
        printf("Number");
    else
        printf("SpecialCharacter");
    return 0;
}