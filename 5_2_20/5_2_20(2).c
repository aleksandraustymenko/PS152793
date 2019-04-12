#include <stdio.h>
#include <stdlib.h>

wchar_t * godzina(int ,int ,int);
int main()
{
    wchar_t hour[]=L"23:04:01";
    for(int i=0; i<8; i++)
        printf("%c",hour[i]);
    free(hour);
    return EXIT_SUCCESS;
}
wchar_t * godzina(int godz,int min,int sek)
{
    wchar_t *result=malloc(9*sizeof(wchar_t));
    swprintf(result,9,L"%02d:%02d:02d",godz,min,sek);
    return result;
}
