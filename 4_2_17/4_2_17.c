#include <stdio.h>
#include <stdlib.h>

double * copyfun(unsigned n,double * tab)
{
    double *a=malloc(n*sizeof(double));
    for(unsigned i=0;i<n;i++)
    {
        a[i]=tab[i];
    }
    return a;
}
int main(void)
{
    unsigned n=7;
    double tab[n];

    double * a=copyfun(n,tab);
    printf("%p",a);
    free(a);
    getchar();
    return EXIT_SUCCESS;
}
