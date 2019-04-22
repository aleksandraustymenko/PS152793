#include <stdio.h>
#include <stdlib.h>

int (*funkcja(int n,int m,int k))
{
    int tab[n][m][k];
    return malloc(n*sizeof(int[m][k]));
}
void funkcja2(int n,int m,int k)
{
    int tab[n][m][k];
    free(tab);
}
int main(void)
{
    int n=7,m=3,k=9;
    printf("%p\n",funkcja(n,m,k));
    funkcja2(n,m,k);
    return EXIT_SUCCESS;
}
