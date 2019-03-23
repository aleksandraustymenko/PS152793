#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int max(unsigned int n,int* tab)
{
    int i, maks=0;
    for(i=1;i<n;i++)
        if(tab[i]>maks)
        maks=tab[i];
    return maks;
}
int minimum(unsigned int n,int* tab)
{
    int i,min=tab[0];
    for(i=1;i<n;i++)
        if(tab[i]<min)
        min=tab[i];
    return min;
}
int funkcja1(unsigned int n,int* tab)
{
    int i,maks=0;
    for(i=1;i<n;i++)
        if(tab[i]>maks)
        maks=i;
    return maks;
}
int funkcja2(unsigned int n,int* tab)
{
    int i,min=0;
    for(i=1;i<n;i++)
        if(tab[i]<tab[min])
        min=i;
    return min;
}
int funkcja3(unsigned int n,int* tab)
{
    int maks=0;
    for(int i=0;i<n;i++)
    {
        if(abs(tab[i])>maks)
        maks=abs(tab[i]);
        return maks;
    }

}
int funkcja4(unsigned int n,int* tab)
{
    int i,maks=0;
    for(i=1;i<n;i++)
     {
         if(abs(tab[i])>0)
            maks=i;
        return maks;
     }
}
int main(void)
{
    unsigned int n=20;
    int tab[n];
    printf("Podaj ile elementow ma byc w tab: ");
    scanf("%d",&n);
    srand(time(NULL));
    for(int i=1;i<=n;i++)
        tab[i]=(rand()%200)-100;
    printf("Najwieksza wartosc tab:%d\n",max(n,tab));
    printf("Najmniejsza wartosc tab:%d\n",minimum(n,tab));
    printf("Indeks elementu o max wartosci:%d\n",funkcja1(n,tab));
    printf("Indeks elementu o min wartosci:%d\n",funkcja2(n,tab));
    printf("Najwieksza wartosc bezwzdledna:%d\n",funkcja3(n,tab));
    printf("Inseks elementu o max wartosci bezw.:%d\n",funkcja4(n,tab));
    getchar();
    return EXIT_SUCCESS;
}

