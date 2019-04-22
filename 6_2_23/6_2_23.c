#include <stdio.h>
#include <stdlib.h>

void function(int n,int m,int *tab)
{
    int i;
    int *var=tab[n-1];
    for(i=n-1;i>0;i--)
        tab[i]=tab[n-1];
    tab[0]=var;
}
int main()
{
   int tab[2][3]={{3,4,5},{4,3,7}};
   function(2,3,tab[0]);
    return EXIT_SUCCESS;

}
