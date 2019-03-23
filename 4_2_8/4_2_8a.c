#include <stdio.h>
#include <stdlib.h>

void f(unsigned int n, int * tab, int * tab2)
{
    int x = n;
    for(unsigned i = 0; i < n; ++i)
    {
        tab[i] = i;
        tab2[i] = --x;
    }
}
void FUNKCJA(unsigned int n, int * tab1, int * tab2, int * tab3)
{
    for(unsigned int i = 0; i < 2; ++i)
  {
    for(unsigned int j = 0; j < n; ++j)
    {
    tab3[(n*i)+j] = i == 0 ? tab1[j]:tab2[j];
    }
  }
}
int main(void)
{
   int n = 5;
   int tab[n],tab_2[n],tab_3[n*2];
    f(n,tab,tab_2);
   FUNKCJA(n,tab,tab_2,tab_3);
  for(int i = 0; i < n*2; ++i)
    {
        printf("%i ",tab_3[i]);
    }
    getchar();
    return EXIT_SUCCESS;
}

