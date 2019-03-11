#include <stdio.h>
#include <stdlib.h>

int * funkcja(unsigned int n)
{
    return malloc(n*sizeof(int));
}
int main()
{
    int *m=funkcja(7);
    printf("%p",m);
    free(m);
    getchar();
    return 0;
}

