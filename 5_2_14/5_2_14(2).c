#include <stdio.h>
#include <stdlib.h>

void wypisz(wchar_t *str)
{
    wprintf(L"%ls\n",str);
}
int main()
{
    wchar_t napis[]=L"Ala ma kota";
    wypisz(napis);
    wprintf(L"%s",napis);
    return EXIT_SUCCESS;
}
