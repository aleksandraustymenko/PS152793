#include <stdio.h>
#include <stdlib.h>

int * fun(unsigned int n)
{
    return malloc(n*sizeof(int));
}

int main(void)
{
   unsigned n=6;
   int *tab=fun(n) ;
   printf("%p",tab);
   free(tab);
   getchar();
   return EXIT_SUCCESS;
}
