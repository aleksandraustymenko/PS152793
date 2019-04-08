#include <stdio.h>
#include <stdlib.h>

void wytnij(wchar_t * ,int ,int );

int main()
{
  wchar_t tekst[]=L"Napisz funkcje wytnij" ;
  wytnij(tekst,1,3);
  return EXIT_SUCCESS;
}
void wytnij(wchar_t *napis ,int n,int m)
{
  int a=0;
  int b=0;
  int c=0;
  int i;
  while(napis[a]!=0)
  {
      a++;
  }
  char var[a];
   for(i=0;i<a;i++)
  {
    if(i<n||i>m)
    {
        var[c]=napis[i];
        c++;
    }
  }
  for(i=0;i<c;i++)
  {
      napis[i]=var[i];
  }
  napis[i]=0;
  wprintf(L"%s",napis);
}
