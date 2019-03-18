#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//nadaje wartoœæ zero wszystkim elementom tablicy tab

void funkcje(unsigned int n,int tab[n])
{
    for(int i=0;i<n;i++)
    {
        tab[i]=0;
        printf("%i",tab[i]);

    }
    printf("\n");
}
//zapisuje do kolejnych elementów tablicy wartoœci równe ich indeksom

void funkcje1(unsigned int n,int tab[n])
{
    for(int i=0;i<n;i++)
    {
        tab[i]=i;
        printf("%i",tab[i]);

    }
    printf("\n");
}
//podwaja wartoœæ wszystkich elementów w tablicy tab
void funkcje2(unsigned int n,int tab[n])
{
    for(int i=0;i<n;i++)
    {
        tab[i]*=2;
        printf("%i",tab[i]);

    }
    printf("\n");
}
 /*do wszystkich komórek tablicy tab wstawia wartoœci bezwzglêdne
ich pierwotnych wartoœci*/
void funkcje3(unsigned int n,int tab[n])
{
    for(int i=0;i<n;i++)
    {
        if(tab[i]<0)
        {
          tab[i] *=-1;
        }
        printf("%i",tab[i]);
    }
    printf("\n");

}
/*
void funkcje3(unsigned int n,int tab[n])
{
    for(int i=0;i<n;i++)
    {
          tab[i]=abs(tab[i]);
        printf("%i",tab[i]);
    }
    printf("\n");

}
*/
int main(void)
{
    int n=5;
    int tab[]={1,4,3,5,-6};
    for(int i=0;i<n;i++)
    {
        printf("%i",tab[i]);
    }
    printf("\n");
    funkcje(n,tab);
    funkcje1(n,tab);
    funkcje2(n,tab);
    funkcje3(n,tab);
    getchar();
    exit(EXIT_SUCCESS);
}
