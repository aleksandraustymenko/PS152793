#include <stdio.h>
#include <stdlib.h>

void sklej (wchar_t *,wchar_t *,wchar_t *);
 int main()
 {
    wchar_t tekst1[]=L"Ala m";
    wchar_t tekst2[]=L"a kota";
    wchar_t tekst3[10];
    sklej(tekst1,tekst2,tekst3);
    wprintf(L"%s\n",tekst3);
    return EXIT_SUCCESS;
 }
void sklej (wchar_t *str1,wchar_t *str2,wchar_t *str3)
{
  int i,j;
  for(i=0;str1[i]!=0;i++)
  {
      str3[i]=str1[i];
  }
  for(j=0;str2[j]!=0;i++,j++)
  {
      str3[i]=str2[j];
      str1[i]=0;
  }

}
