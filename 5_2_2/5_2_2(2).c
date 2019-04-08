#include <stdio.h>
#include <stdlib.h>
int dlugosc(wchar_t *);

int main(void)
{
    wchar_t napis[]=L"Napisz funkcje";
    dlugosc(napis);
    wprintf(L"Dlugosc:%i\n",dlugosc(napis));
    return EXIT_SUCCESS;
}
int dlugosc(wchar_t *str)
{
    int i=0;
    while(str[i]!=0)
        i++;
    return i;
}
