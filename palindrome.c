#include<stdio.h>
int main()
{
    int N,T,C;
    scanf("%d",&N);
    T=N;
       while(T)
    {
        C+=T%10;
        T/=10;
    }
    if(C==N)
        printf("Yes");
    else
        printf("No");
    return 0;
}