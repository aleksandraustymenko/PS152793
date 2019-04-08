#include <stdio.h>
#include <stdlib.h>

void wyczysc(wchar_t *);
int main(void)
{
    wchar_t napis[]=L"Hello world";
    wyczysc(napis);
    wprintf(L"%s",napis);
    puts(napis);
    return EXIT_SUCCESS;
}
void wyczysc(wchar_t * str)
{
    str[0]=0;//str[0]='\0';
}
