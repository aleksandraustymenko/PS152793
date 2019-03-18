#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void funkcja(unsigned int n,int tab1[n],int tab2[n])
{
    int wyb=0;
    while(wyb!=1 && wyb!=2)
    {
      printf("Wprowadz '1' aby przepisac tab w tej samej kolejnosci,albo '2'- w odwrotnej:  \n");
      scanf("%d",&wyb);
    }
    if(wyb==1)
    {
        for(int i=0;i<n;i++)
            tab2[i]=tab1[i];
    }
    else
    {
        for(int i=0;i<n;i++)
            tab2[n-i-1]=tab1[i];
    }
}
void wypisuje(int n,int tab[n])
{
    for(int i=0;i<n;i++)
        printf("%d\n",tab[i]);
}

int main()
{
    int rozmiar;
    printf("Podaj rozmiar tab: ");
    scanf("%d",&rozmiar);
    int* tab1=malloc(rozmiar * sizeof(int));
    int* tab2=malloc(rozmiar * sizeof(int));
    for(int i=0;i<rozmiar;i++)
    {
        tab1[i]=rand()%13;
    }
    wypisuje(rozmiar,tab1);
    funkcja(rozmiar,tab1,tab2);
    wypisuje(rozmiar,tab2);
    getchar();
    exit(EXIT_SUCCESS);

}
