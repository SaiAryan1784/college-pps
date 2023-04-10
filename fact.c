#include<Stdio.h>

int factorial(int n)
{
    int prod=1;
    while(n)
    {
        prod*=n;
        n--;
    }
}