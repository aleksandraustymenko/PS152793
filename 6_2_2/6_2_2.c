#include <stdio.h>
#include <stdlib.h>

int (*funkcja(int n,int m))
{
    int tab[n][m];
    return malloc(n*sizeof(int[m]));
}
int main(void)
{
    int n=2;
    int m=6;
    printf("%p",funkcja(n,m));
    return EXIT_SUCCESS;
}
