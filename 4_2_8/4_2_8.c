#include <stdio.h>
#include <stdlib.h>

void f(unsigned int n, int * tab, int * tab2)
{
    int x = n;
  for(unsigned i = 0; i < n; i++)
    {
        tab[i] = i;
        tab2[i] = --x;
    }
}

void funkcja(unsigned int n, int * tab1, int * tab2, double * tab3)
{
    int x = 0, y = 0;
   for(unsigned int i = 0; i < n*2; ++i)
     {
     tab3[i] = i % 2 == 0 ? tab2[x++]:tab1[y++];
     }
}
int main(void)
{
    int n = 10;
    int tab[n],tab_2[n];
    double tab_3[n*2];
    f(n,tab,tab_2);
    funkcja(n,tab,tab_2,tab_3);
    for(unsigned int i = 0; i < n*2; i++)
    {
        printf("%.lf ",tab_3[i]);
    }
    getchar();
    return EXIT_SUCCESS;
}

