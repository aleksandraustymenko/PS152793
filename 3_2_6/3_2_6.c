#include <stdio.h>

void funkcja(int n,int *w)
{
    *w=n;
}
int main()
{
     int x,y=0;
     printf("Podaj liczbe x: \n");
     scanf("%i",&x);
     printf("Wartosc zmiennej y przed zmiana:%i\n",y);
     funkcja(x,&y);
     printf("Watrosc zmiennej y po zmianie:%i\n",y);
     return 0;
}
