#include <stdio.h>
#include <stdlib.h>

void function(double * tab)
{
    free(tab);
}
int main(void)
{
    unsigned n=5;
    double * tab=malloc(n*sizeof(double));
    for(unsigned i=0;i<n;i++)
    {
        tab[i]=i/2;
        printf("%.2f\n",tab[i]);
    }
    function(tab);
    getchar();
    return EXIT_SUCCESS;
}
