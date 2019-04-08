#include <stdio.h>
#include <stdlib.h>

int porownaj(wchar_t *,wchar_t *);

int main(void)
{
    wchar_t tekst1[]=L"Hejka";
    wchar_t tekst2[]=L"Hello";
    wprintf(L"Porownaj napisy:%i",porownaj(tekst1,tekst2));
    return EXIT_SUCCESS;
}
int porownaj(wchar_t *str1,wchar_t *str2)
{
    int i=0;
    int j=0;
    while(str1[i]!=0)
    {
        i++;
    }
    while(str2[j]!=0)
    {
         j++;
    }
    if(i==j)
        return 1;
    else
        return 0;
}
