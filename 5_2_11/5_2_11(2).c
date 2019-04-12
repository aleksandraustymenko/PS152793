#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void wytnijzw (wchar_t *,wchar_t *);
bool wyst(wchar_t ,wchar_t * );
int main()
{
    wchar_t napis1[]=L"Ala ma kota";
    wchar_t napis2[]=L"Ona ma psa";
    wytnijzw(napis1,napis2);
    wprintf(L"%s %s",napis1,napis2);
    return EXIT_SUCCESS;
}
bool wyst(wchar_t m,wchar_t * str)
{
    int i;
    for (i=0;str[i]!=0;i++)
        if(str[i]==m)
        return true;
    return false;
}
void wytnijzw (wchar_t *str1,wchar_t *str2)
{
    int i,j;
    for(i=0,j=0;str1[i]!=0;i++)
        if(!wyst(str1[i],str2))
    {
        if(j<i)
            str1[j]=str1[i];
        j++;
    }
    str1[j]=0;
}
