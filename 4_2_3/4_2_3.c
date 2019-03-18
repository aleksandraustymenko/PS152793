#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double funkcja(unsigned int n, const int tab[n])
{
    double srednia=0;
    for(int i=0;i<n;i++)
    {
        srednia+=tab[i];
    }
    return srednia/n;
}
int main(void)
{
    int n=5;
    int tab[]={8,4,5,6,7};
    for(int i=0;i<n;i++)
    {
        printf("%i",tab[i]);
    }
    printf("\n");
    printf("Srednia arytmetyczna:%.1f",funkcja(n,tab));
    getchar();
    exit(EXIT_SUCCESS);
}
