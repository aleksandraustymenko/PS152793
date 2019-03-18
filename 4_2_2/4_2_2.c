#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// œredni¹ arytmetyczn¹ elementów tablicy tab.
double funkcja(unsigned int n,int tab[n])
{
   double srednia=0;
   for(int i=0;i<n;i++)
   {
       srednia+=tab[i];
   }
   return srednia/n;
}
// sumê elementów tablicy tab
int funkcja1(unsigned int n,int tab[n])
{
    int suma=0;
    for(int i=0;i<n;i++)
    {
        suma+=tab[i];
    }
    return suma;
}
// sumê kwadratów elementów tablicy tab
int funkcja2(unsigned int n,int tab[n])
{
    int suma=0;
    for(int i=0;i<n;i++)
    {
        suma+=tab[i]*tab[i];
    }
    return suma;
}
int main(void)
{
    int n=5;
    int tab[]={9,8,7,1,4};
    for(int i=0;i<n;i++)
    {
        printf("%i",tab[i]);
    }
    printf("\n");
    printf("Srednia arytmetyczna:%.1f\n",funkcja(n,tab));
    printf("Suma elementow:%i\n",funkcja1(n,tab));
    printf("Suma kwadratow:%i\n",funkcja2(n,tab));
    getchar();
    exit(EXIT_SUCCESS);
}
