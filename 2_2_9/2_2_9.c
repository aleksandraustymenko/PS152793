#include <stdio.h>
#include <math.h>

float pierw(int,int);
int main()
{
    int m,n;
    printf("Podaj stopien:");
    scanf("%i",&m);
    printf("Podaj liczbe:");
    scanf("%i",&n);
    if(m>1&&n>-1)
    {
        printf("Pierwiastek %i stopnia z %i wynosi %.2f",m,n,pierw(m,n));
    }
    else
    {
        printf("Zle");
    }
    return 0;
}
float pierw(int m,int n)
{
    return pow(n,(float)1/m);
}
