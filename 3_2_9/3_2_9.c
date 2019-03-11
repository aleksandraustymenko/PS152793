#include <stdio.h>
#include <stdlib.h>

/*int* funkcja()
{
    return malloc(sizeof(int));
}
int main()
{
    int wynik=*funkcja();
    wynik=2;
    printf("%d",wynik);
    free(wynik);
    return 0;
}*/
int* funkcja()
{
    return malloc(sizeof(int));
}
int main()
{
    int *wynik=funkcja();
    *wynik=2;
    printf("%d",*wynik);
    free(wynik);
    return 0;
}
